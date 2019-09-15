#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> answer_man(N, 0);
    rep (i, Q) {
        int answer;
        cin >> answer;
        answer_man[answer - 1]++;
    }

    rep (i, N) {
        cout << (K - Q + answer_man[i] > 0 ? "Yes" : "No") << endl;
    }

    return 0;
}
