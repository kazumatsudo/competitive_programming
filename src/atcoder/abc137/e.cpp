#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> nodeByA[2500];
vector<int> nodeByB[2500];
bool reachableByA[2500];
bool reachableByB[2500];
bool reachable[2500];

void dfsByA (int n) {
    if (reachableByA[n]) {
        return;
    }

    reachableByA[n] = true;

    for (int a: nodeByA[n]) {
        dfsByA(a);
    }
}

void dfsByB (int n) {
    if (reachableByB[n]) {
        return;
    }

    reachableByB[n] = true;

    for (int b: nodeByB[n]) {
        dfsByB(b);
    }
}

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    vector<tuple<int, int, int>> edges;
    rep (i, M) {
        int A, B, C;
        cin >> A >> B >> C;

        A -= 1;
        B -= 1;
        C = -1 * (C - P);

        nodeByA[A].push_back(B);
        nodeByB[B].push_back(A);
        edges.emplace_back(A, B, C);
    }
    dfsByA(0);
    dfsByB(N - 1);

    rep(i, N) {
        reachable[i] = reachableByA[i] && reachableByB[i];
    }

    // const int INF = 1001001001;
    vector<int> d(N, 1001001001);
    d[0] = 0;

    bool update = true;
    int count = 0;

    while (update) {
        update = false;

        rep(i, M) {
            int a, b, c;
            tie(a, b, c) = edges[i];

            if (!(reachable[a] && reachable[b])) {
                continue;
            }

            int newD = d[a] + c;
            if (newD < d[b]) {
                d[b] = newD;
                update = true;
            }
        }

        count++;
        if (count > N) {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << max(-d[N - 1], 0) << endl;
    return 0;
}