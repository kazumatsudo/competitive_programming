#include<iostream>
#include <set>
using namespace std;
int main()
{
    // 入力
    int n;
    cin >> n;

    set<int> d;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        d.insert(a);
    }

    // 出力
    cout << d.size() << endl;
    return 0;
}

