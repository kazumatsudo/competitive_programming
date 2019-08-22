#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    ll sum = 0;
    rep (i, N) {
        cin >> A[i];
        sum += A[i];
    }

    set<ll> candidates;
    for (int i = 1; i * i <= sum; i++) {
        if (sum % i == 0) {
            candidates.insert(i);
            candidates.insert(sum / i);
        }
    }

    ll ans = 1;
    for (ll x: candidates) {
        ll need;

        vector<ll> r(N);
        rep (i, N) {
            r[i] = A[i] % x;
        }
        sort(r.begin(), r.end());

        ll B = 0;
        rep (i, N) {
            B += x - r[i];
        }

        ll A = 0;
        need = 1e18;

        rep (i, N) {
            A += r[i];
            B -= x - r[i];
            need = min(need, max(A, B));
        }

        if (need <= K) {
            ans = max(ans, x);
        }
    }

    cout << ans << endl;
    return 0;
}
