#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) {
        int index;
        cin >> index;
        A[index - 1] = i + 1;
    }

    rep(i, N) {
        printf("%d%c", A[i], i == N - 1 ? '\n' : ' ');
    }
    return 0;
}
