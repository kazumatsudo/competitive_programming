#include<iostream>
using namespace std;
int main()
{
    // 入力
    int a,b;
    cin >> a >> b;

    string judge = (a % 2 == 0 || b % 2 == 0) ? "Even" : "Odd";

    // 出力
    cout << judge << endl;
    return 0;
}