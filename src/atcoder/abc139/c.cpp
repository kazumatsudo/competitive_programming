#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;
    vector<int> H(N);
    rep (i, N) {
        cin >> H[i];
    }

    vector<int> answer;
    rep (i, N) {
        if (i == 0) {
            answer.push_back(0);
        } else {
            if (H[i - 1] >= H[i]) {
                answer[answer.size() - 1]++;
            } else {
                answer.push_back(0);
            }
        }
    }

    sort(answer.begin(), answer.end(), greater<>());

    cout << answer[0] << endl;
    return 0;
}

