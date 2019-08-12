#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int A, B;
    cin >> A >> B;

    // 出力
    cout << max(max(A + B, A - B ), A * B) << endl;
    return 0;
}

