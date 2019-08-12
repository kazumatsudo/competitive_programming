#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    string S = cin.next();
    const int N = 13;

    long[] dp = new long[N];

    long mod = 1000000007;
    long mul = 1;
    for (int i = S.Length - 1; i >= 0; i--) {
        char c = S[i];
        if (c == '?') {
            for (int k = 0; k < 10; k++) {

            }
        }
    }

}




/*

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    string S;
    cin >> S;
    int S_size = S.size();

    char SminChar[S_size], SmaxChar[S_size];

    S.copy(SminChar, S_size);
    S.copy(SmaxChar, S_size);

    rep(i, S.size()) {
        if (SminChar[i] == '?') {
            SminChar[i] = '0';
            SmaxChar[i] = '9';
        }
    }

    ll Smin = atoi(SminChar);
    ll Smax = atoi(SmaxChar);

    ll count = 0;
    for (ll i = Smin - (Smin % 13) + 5; i <= Smax; i = i + 13) {
        bool correspond = true;
        ostringstream sout;
        sout << setfill('0') << right << setw(S_size) << i;
        string i_str = sout.str();

        rep (j, S_size) {
            if (S[j] == '?') {
                continue;
            } else if (i_str[j] != S[j]) {
                correspond = false;
                break;
            }
        }

        if (correspond) {
            count++;
        }
    }

    // 出力
    ll divide = 1000000000 + 7;
    cout << count % divide << endl;

    return 0;
}



 */