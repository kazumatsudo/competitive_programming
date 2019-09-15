#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    string S;
    cin >> S;

    bool odd = true;
    bool even = true;

    rep (i, S.size()) {
        if ((i + 1) % 2 == 1) {
            if (S[i] == 'L') {
                odd = false;
            }
        } else {
            if (S[i] == 'R') {
                even = false;
            }
        }
    }

    cout << ((odd && even) ? "Yes" : "No") << endl;
    return 0;
}

