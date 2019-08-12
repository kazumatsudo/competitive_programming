#include<iostream>
using namespace std;
int main()
{
    // 入力
    int a,b,c;
    cin >> a >> b >> c;

    if (a >= b + c) {
        cout << 0 << endl;
    } else {
        cout << b + c - a << endl;
    }

    // 出力
    return 0;
}
