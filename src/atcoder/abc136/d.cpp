#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> s;
  n = s.size();
  vector<int> ans(n);
  rep(ri, 2 ){
        { // solve R
            int count = 0;
            rep(i, n) {
                if (s[i] == 'R') {
                    count++;
                } else {
                    ans[i] += count / 2;
                    ans[i - 1] += (count + 1) / 2;
                    count = 0;
                }
            }
        }

        reverse(ans.begin(), ans.end());
        reverse(s.begin(), s.end());

        rep(i, n) {
            if (s[i] == 'L') {
                s[i] = 'R';
            } else {
                s[i] = 'L';
            }
        }
  }

  rep(i, n) {
      printf("%d%c", ans[i], i == n - 1 ? '\n' : ' ');
  }
  return 0;
}