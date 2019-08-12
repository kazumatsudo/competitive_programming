#include<iostream>
using namespace std;
int main()
{
    // 入力
    int n,a,b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; i++){
        int sum_digit = 0;
        int digit = i;

        while (digit > 0) {
            sum_digit += digit % 10;
            digit /= 10;
        }

        if (!(a <= sum_digit && sum_digit <= b)) {
            continue;
        }

        sum += i;
    }

    // 出力
    cout << sum << endl;
    return 0;
}

