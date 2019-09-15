#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    int ans = 0;
    rep (i, N) {
        if (i != 0) {
            if (S[i] == 'L' && S[i - 1] == 'L') {
                ans += 1;
            } else if (S[i] == 'R' && S[i - 1] == 'R'){
                ans += 1;
            }
        }
    }

    cout << min(N - 1, ans + K * 2) << endl;
    return 0;
}

