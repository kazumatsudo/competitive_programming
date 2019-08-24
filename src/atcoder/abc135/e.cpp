// wrong answer
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main()
{
    // 入力
    int K;
    cin >> K;

    int X, Y;
    cin >> X >> Y;

    if (K % 2 == 0 && (X + Y) % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    vector<P> answer;
    int x = 0, y = 0;
    while (abs(X - x) + abs(Y - y) > 2 * K) {
        int k = K;

        if (X >= 0) {
            if ((x + k) <= X) {
                x += k;
                k = 0;
            } else {
                k = x + K - X;
                x = X;
            }
        } else {
            if ((x - k) >= X) {
                x -= k;
                k = 0;
            } else {
                k = -x + K + X;
                x = X;
            }
        }

        if (Y >= 0) {
            y += k;
        } else {
            y -= k;
        }

        answer.push_back(P(x, y));
    }

    if (x != X) {
        int moveY = K - abs(X - x);
        x = X;
        if (Y >= 0) {
            y += moveY;
        } else {
            y -= moveY;
        }

        answer.push_back(P(x, y));
    }

    if (abs(Y - y) % 2 == 1) {
        if (Y >= 0) {
            y = y + K;
        } else {
            y = y - K;
        }

        answer.push_back(P(x, y));
    }

    int intermediateY = (Y + y) / 2;
    int intermediateX = K - (intermediateY - Y);
    answer.push_back(P(X + intermediateX, intermediateY));
    answer.push_back(P(X, Y));

    // 出力
    int size = answer.size();
    cout << size << endl;
    rep (i, size) {
        printf("%d %d\n", answer[i].first, answer[i].second);
    }
    return 0;
}
