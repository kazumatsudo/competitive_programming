#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int N;
    cin >> N;

    vector<string> S(N);
    rep (i, N) {
        string s;
        cin >> s;

        vector<string> s_v;
        s_v.push_back(s);

        sort(s.begin(), s.end());
        S[i] = s;
    }
    sort(S.begin(), S.end());

    ll count = 0;
    rep (i, N) {
        if (S[i] == "") {
            continue;
        }

        int count_inner = 0;
        for (int j = i + 1; j < N; j++) {
            if (S[i] == S[j]) {
                count_inner++;
                count += count_inner;

                S[j] = "";
            } else {
                break;
            }
        }
    }

    // 出力
    cout << count << endl;
    return 0;
}
