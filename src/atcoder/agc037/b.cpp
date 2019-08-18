#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

/**
 * mod を計算するライブラリ
 */
const int mod = 998244353;
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

int main()
{
    // 入力
    int N, S;
    cin >> N, S;

    // 出力
    cout << a + b << endl;
    return 0;
}

