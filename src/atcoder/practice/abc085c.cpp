#include<iostream>
using namespace std;
int main()
{
    // 入力
    int N, Y;
    cin >> N >> Y;

    int x = -1, y = -1, z = -1;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; (i + j) <= N; j++) {
            int k = N - (i + j);

            if (k < 0) {
                continue;
            }

            int money = 10000 * k + 5000 * j + 1000 * i;
            if (money == Y) {
                z = i;
                y = j;
                x = k;

                cout << x << " " << y << " " << z << endl;
                return 0;
            } else if (money > Y) {
                continue;
            }
        }
    }

    // 出力
    cout << x << " " << y << " " << z << endl;
    return 0;
}

