#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int N;
    cin >> N;

    vector<int> A(N);
    int M = 0;
    rep (i, N) {
        cin >> A[i];

        if (i % 2 == 0) {
            M += A[i];
        } else {
            M -= A[i];
        }
    }

    vector<int> Mountain(N);
    Mountain[0] = M;
    for (int i = 1; i < N; i++) {
        M = -1 * M + 2 * A[i - 1];
        Mountain[i] = M;
    }

    // 出力
    rep (i, N) {
        printf("%d%c", Mountain[i], i == N ? '\n' : ' ');
    }
    return 0;
}

