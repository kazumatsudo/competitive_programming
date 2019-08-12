#include<iostream>
using namespace std;
int main()
{
    // 入力
    int N;
    cin >> N;

    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    for (int i = N - 1; i > 0; i--) {
        if (H[i - 1] - H[i] == 1) {
            H[i - 1]--;
        } else if (H[i - 1] - H[i] >= 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 出力
    cout << "Yes" << endl;
    return 0;
}

