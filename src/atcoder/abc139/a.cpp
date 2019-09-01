#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    string S, T;
    cin >> S >> T;

    int count = 0;
    if (S[0] == T[0]) {
        count++;
    }
    if (S[1] == T[1]) {
        count++;
    }
    if (S[2] == T[2]) {
        count++;
    }
    cout << count << endl;
    return 0;
}

