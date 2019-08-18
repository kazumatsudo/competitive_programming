#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int N;
    cin >> N;

    double sum = 0;
    rep (i, N) {
        double a;
        cin >> a;

        sum += 1 / a;
    }

    // 出力
    printf("%lf", 1 / sum);
    return 0;
}
