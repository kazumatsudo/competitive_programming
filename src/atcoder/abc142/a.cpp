#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main()
{
    double N;
    cin >> N;

    double odd, ans;
    odd = ceil(N / 2);
    ans = odd / N;

    printf("%.6f", ans);
    return 0;
}
