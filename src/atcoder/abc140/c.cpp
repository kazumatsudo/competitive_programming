#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;

    vector<int> B(N - 1);
    rep(i, N - 1) {
        cin >> B[i];
    }
    reverse(B.begin(), B.end());

    int ans = 0;
    rep (i, N - 1) {
        if (i == 0){
            ans += B[i];
        } else {
            ans += min(B[i], B[i - 1]);
        }
    }
    ans += B[N - 2];

    cout << ans << endl;
    return 0;
}

