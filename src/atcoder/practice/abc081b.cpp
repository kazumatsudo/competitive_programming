#include<iostream>
using namespace std;
int main()
{
    // 入力
    int n;
    cin >> n;

    int count = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        int count_a = 0;
        while (a % 2 == 0) {
            count_a++;
            a = a / 2;
        }

        count = min(count, count_a);
    }

    // 出力
    cout << count << endl;
    return 0;
}

