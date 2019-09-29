#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    ll A, B;
    cin >> A >> B;

    set<ll> primes;
    primes.insert(1);
    for (ll i = 2; i * i <= A; i++) {
        while (A % i == 0) {
            primes.insert(i);
            A /= i;
        }
    }
    if (A != 1) {
        primes.insert(A);
    }

    int ans = 0;
    for (ll prime: primes) {
        if (B % prime == 0) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
