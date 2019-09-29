#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N, K;
    cin >> N >> K;

    int ans = 0;
    rep(i, N) {
        int height;
        cin >> height;
        if (height >= K) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
