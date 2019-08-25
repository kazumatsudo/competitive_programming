#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

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

int main()
{
    ll N, K;
    cin >> N >> K;

    vector<ll> A(N), sortA(N);
    rep (i, N) {
        cin >> A[i];
        sortA[i] = A[i];
    }
    sort(sortA.begin(), sortA.end());

    ll count = 0;
    ll countK = 0;

    rep (i,  N) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                count++;
            }
        }

        rep (j, N) {
            if (A[i] > sortA[j]) {
                countK++;
            }
        }
    }

    mint countKNeed = ((K - 1) * K) / 2;
    mint answer = ((count * K % mod)  + (countK * countKNeed.x % mod));
    cout << answer.x << endl;
}