#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

vector<vector<int>> n(200005);
vector<ll> counter(200005, 0);
map<int, ll> sum = {};

void dfs(int first, ll second) {
    for (int v: n[first]) {
        dfs(v, second + sum[v]);
    }

    counter[first] += second;
}

int main()
{
    // 入力
    int N, Q;
    cin >> N >> Q;

    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;

        n[a].push_back(b);
    }

    for (int i = 1; i <= Q; i++) {
        int p, x;
        cin >> p >> x;

        sum[p] = sum[p] + x;
    }

    auto i = sum.begin();
    dfs(1, sum[1]);

    // 出力
    for (int i = 1; i <= N; i++) {
        printf("%lld%c", counter[i], i == N ? '\n' : ' ');
    }

    return 0;
}

