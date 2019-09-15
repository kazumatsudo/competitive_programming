#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    unsigned long len = 0;
    for (unsigned long startL1 = 0; startL1 + (len * 2) < N; startL1++) {
        for (unsigned long startL2 = startL1 + 1; startL2 + len < N; startL2++) {
            for (unsigned long end = len; end < startL2 - startL1; end++) {
                string s1 = S.substr(startL1, end + 1);
                string s2 = S.substr(startL2, end + 1);

                if (s1 == s2) {
                    len = max(len, s1.size());
                } else {
                    break;
                }
            }
        }
    }

    cout << len << endl;
    return 0;
}
