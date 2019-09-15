#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    string S;
    cin >> S;

    if (S == "Sunny") {
        cout << "Cloudy" << endl;
    } else if (S == "Cloudy") {
        cout << "Rainy" << endl;
    } else {
        cout << "Sunny" << endl;
    }

    return 0;
}
