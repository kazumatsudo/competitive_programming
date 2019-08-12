// 答えが誤っている

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;　
typedef long long ll;
typedef pair<int, int> P;

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

template<typename T>
struct BIT {
    int n;
    vector<T> d;

    BIT(int n = 0): n(n), d(n + 1) {}

    void add(int i, T x = 1) {
        for (i++; i<= n; i += i & -1) {
            d[i] += x;
        }
    }

    T sum(int i) {
        T x = 0;
        for (i++; i; i -= i & -1) {
            x += d[i];
        }

        return x;
    }
};

mint f(int a, int b, int c, int d) {
    mint res = 0;

    vector<int> num = {a, b, c, d};
    vector<mint> o(4), ox(4);

    rep(i, 4) {
        ox[i] = mint(2).pow(num[i]);
        o[i] = ox[i] - 1;
    }

    res += ox[0] * o[1] * o[2] * ox[3];
    res += o[0] * ox[1] * ox[2] * o[3];
    res -= o[0] * o[1] * o[2] * o[3];

    res += ox[0] * ox[1] * ox[2] * ox[3];
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<P> p(n);

    rep(i, n) {
        cin >> p[i].first >> p[i].second;
    }

    { // compress x;
        map<int, int> mp;
        rep(i, n) {
            mp[p[i].first] = 0;
        }

        int j = 0;
        for (auto&& x : mp) {
            x.second = j++; // 動画だと first になっている
        }

        rep(i, n) {
            p[i].first = mp[p[i].first];
        }
    }

    { // compress y;
        map<int, int> mp;
        rep(i, n) {
            mp[p[i].second] = 0;
        }

        int j = 0;
        for (auto&& x : mp) {
            x.second = j++;
        }

        rep(i, n) {
            p[i].second = mp[p[i].second];
        }
    }

    sort(p.begin(), p.end());

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);

    rep(_, 2) {
        { // calc a, b
            BIT<int> bit(n);
            rep(i, n) {
                a[i] = bit.sum(p[i].second);
                b[i] = i - a[i];
                bit.add(p[i].second);
            }
        }
        reverse(p.begin(), p.end());
        swap(a, c);
        swap(b, d);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());
        reverse(d.begin(), d.end());
    }

    mint ans = 0;
    rep(i, n) {
        ans += f(a[i], b[i], c[i], d[i]);
    }

    cout << ans.x << endl;
    return 0;
}