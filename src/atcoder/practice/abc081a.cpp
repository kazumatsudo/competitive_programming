#include<iostream>
using namespace std;
int main()
{
    // 入力
    string s;
    cin >> s;

    int result = count(s.cbegin(), s.cend(), '1');

    // 出力
    cout << result << endl;
    return 0;
}