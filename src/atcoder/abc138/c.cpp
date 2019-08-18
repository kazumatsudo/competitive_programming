#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int N;
    cin >> N;

    vector<int> v(N);
    rep (i, N) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    double sum = v[0];
    for (int i = 1; i < N; i++) {
        sum += v[i];
        sum = sum / 2;
    }

    // 出力
    cout << sum << endl;
    return 0;
}

