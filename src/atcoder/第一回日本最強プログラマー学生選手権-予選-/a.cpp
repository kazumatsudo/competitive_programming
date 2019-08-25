#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    int M, D;
    cin >> M >> D;

    int count = 0;
    for (int i = 0; i <= D; i++) {
        int d1 = i % 10;
        int d10 = i / 10;

        if (d1 < 2 || d10 < 2) {
            continue;
        }

        for (int j = 0; j <= M; j++ ) {
            if (j == d1 * d10) {
                count++;
            }
        }
    }

    cout << count << endl;
}