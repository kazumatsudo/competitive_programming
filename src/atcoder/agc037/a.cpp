#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    string S;
    cin >> S;

    string prevS = "";
    string currentS = "";
    int k = 0;
    rep (i, S.size()) {
        currentS = currentS + S[i];
        if (prevS != currentS) {
            prevS = currentS;
            currentS = "";
            k++;
        }
    }

    // 出力
    cout << k << endl;
    return 0;
}

