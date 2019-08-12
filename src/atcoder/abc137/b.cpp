#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int K, X;
    cin >> K >> X;

    for (int i = X - K + 1; i <= X + K - 1; i++) {
        if (i < -1000000) {
            continue;
        }
        if (i > 1000000) {
            break;
        }

        printf("%d%c", i, i == X + K - 1 || i == 1000000 ? '\n' : ' ');
    }

    // 出力
    return 0;
}

