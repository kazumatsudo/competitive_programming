#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> jobs(M + 1);
    rep (i, N) {
        int a, b;
        cin >> a >> b;

        if (a > M) {
            continue;
        }

        jobs[a].push_back(b);
    }

    priority_queue<int> q;
    ll answer = 0;

    for (int i = 0; i < M + 1; i++) {
        for (int b: jobs[i]) {
            q.push(b);
        }

        if (!q.empty()) {
            answer += q.top();
            q.pop();
        }
    }

    cout << answer << endl;
    return 0;
}

