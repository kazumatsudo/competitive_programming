// wrong_answer
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

typedef pair<int, int> firstSecond;

int main()
{
    int N;
    cin >> N;

    vector<int> P(N);
    rep (i, N) {
        cin >> P[i];
    }

    int ans = 0;
    vector<vector<firstSecond>> dp(N, vector<firstSecond>(N, firstSecond(-1, -1)));
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (i + 1 == j) {
                int firstCandidate, secondCandidate;
                if (P[i] > P[j]) {
                    firstCandidate = P[i];
                    secondCandidate = P[j];
                } else {
                    firstCandidate = P[j];
                    secondCandidate = P[i];
                }

                dp[i][j] = firstSecond(firstCandidate, secondCandidate);
            } else {
                int current = P[j];

                int firstPrev = dp[i][j - 1].first;
                int secondPrev =  dp[i][j - 1].second;

                if (secondPrev > current) {
                    dp[i][j] = dp[i][j - 1];
                } else if (current > firstPrev) {
                    dp[i][j] = firstSecond(current, firstPrev);
                } else {
                    dp[i][j] = firstSecond(firstPrev, current);
                }
            }

            ans += dp[i][j].second;
        }
    }

    cout << ans << endl;
    return 0;
}

