#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = 0;
    int sum = 1;
    while (true) {
        if (sum >= b) {
            break;
        }

        answer++;
        sum += a - 1;
    }

    cout << answer << endl;
    return 0;
}

