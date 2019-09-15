#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    ll N, M;
    cin >> N >> M;

    priority_queue<ll> A;
    rep (i, N) {
        ll price;
        cin >> price;
        A.push(price);
    }

    rep (i, M) {
        ll price = A.top() / 2;
        A.pop();

        A.push(price);
    }

    ll answer = 0;
    while (!A.empty()) {
        answer += A.top();
        A.pop();
    }

    cout << answer << endl;
    return 0;
}

