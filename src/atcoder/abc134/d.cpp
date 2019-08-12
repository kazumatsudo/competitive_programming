#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    // 入力
    int N;
    cin >> N;

    vector<int> a(N);
    vector<int> box(N);
    rep(i, N) {
        cin >> a[i];
        box[i] = 0;
    }

    int M = 0;
    vector<int> b(N);
    for (int i = N - 1; i >= 0; i--) {
        int box_num = i + 1;

        int count = 0;
        for (int j = i; j < N; j += box_num) {
            if (box[j] == 1) {
                count++;
            }
        }

        if (count % 2 != a[i]) {
            box[i] = 1;
            b[M] = box_num;
            M++;
        }
    }

    // 出力
    if (M == 0) {
        cout << 0 << endl;
    } else {
        cout << M << endl;
        rep(i, M) {
            printf("%d%c", b[i], i != M - 1 ? ' ' : '\n');
        }
    }
    return 0;
}
