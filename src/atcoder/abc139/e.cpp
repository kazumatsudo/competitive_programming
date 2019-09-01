// wrong answer
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;

    vector<queue<int>> A(N);
    rep (i, N) {
        rep (j, N - 1) {
            int opponent;
            cin >> opponent;
            A[i].push(opponent);
        }
    }

    int day = 0;
    int totalMatch = 0;
    while (true) {
        day++;
        int todayMatch = 0;

        vector<int> already;
        rep (i, N) {
            if (A[i].empty()) {
                continue;
            }

            auto itr = find(already.begin(), already.end(), i);
            size_t index = distance(already.begin(), itr);
            if (index != already.size()) {
                continue;
            }

            auto itr2 = find(already.begin(), already.end(), A[i].front() - 1);
            size_t index2 = distance(already.begin(), itr2);
            if (index2 != already.size()) {
                continue;
            }

            int a, b;
            a = A[i].front();
            b = A[a - 1].front();

            if (a <= i) {
                continue;
            }

            if (b - 1 == i) {
                todayMatch++;

                already.push_back(a - 1);

                A[i].pop();
                A[a - 1].pop();
            }
        }

        totalMatch += todayMatch;
        if (totalMatch == N * (N - 1) / 2) {
            break;
        }

        if (todayMatch == 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << day << endl;
    return 0;
}