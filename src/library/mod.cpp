/**
 * mod を計算するライブラリ
 */

const int mod = 1000000007;
struct mint {
    ll x;
    mint(ll x=0): x(x % mod) {}

    mint& operator += (const mint a) {
        if ((x += a.x) >= mod) {
            x -= mod;
        }
        return *this;
    }

    mint& operator -= (const mint a) {
        if ((x += mod - a.x) >= mod) {
            x -= mod;
        }
        return *this;
    }

    mint& operator *= (const mint a) {
        (x *= a.x) %= mod;
        return *this;
    }

    mint& operator + (const mint a) const {
        mint res(*this);
        return res += a;
    }

    mint& operator - (const mint a) const {
        mint res(*this);
        return res -= a;
    }

    mint& operator * (const mint a) const {
        mint res(*this);
        return res *= a;
    }

    mint pow(ll t) const {
        if (!t) {
            return 1;
        }

        mint a = pow(t >> 1);
        a *= a;

        if (t & 1) {
            a *= *this;
        }

        return a;
    }

    mint inv() const {
        return pow(mod - 2);
    }

    mint& operator /= (const mint a) {
        return (*this) *= a.inv();
    }

    mint operator / (const mint a) const {
        mint res(*this);
        return res /= a;
    }
};