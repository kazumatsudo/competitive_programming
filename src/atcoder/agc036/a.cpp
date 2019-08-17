#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    ll S;
    cin >> S;

    ll Y = S / 1000000000;
    ll X = S - Y * 1000000000;
    if (X > 0) {
        X = 1000000000 - X;
        Y = Y + 1;
    }

    // 出力
    printf("0 0 1000000000 1 %lld %lld", X, Y);
    return 0;
}
