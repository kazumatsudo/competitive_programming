#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main()
{
    // 入力
    int N;
    cin >> N;
    priority_queue<P, vector<P>, greater<P>> w;

    rep (i, N) {
        int A, B;
        cin >> A >> B;

        w.push(make_pair(B, A));
    }

    ll T = 0;
    while (!w.empty()) {
        P p = w.top();
        w.pop();

        T += p.second;
        if (T > p.first) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 出力
    cout << "Yes" << endl;
    return 0;
}
