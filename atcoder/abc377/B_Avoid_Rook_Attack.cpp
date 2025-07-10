#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define fs(i, s, e) for (long long int i = s; i < e; i++)
#define f(i, e) for (long long int i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

void solve() {
  vector<string> v(8);
  bool row[8];
  bool col[8];
  f(i, 8) {
    cin >> v[i];
    row[i] = 0;
    col[i] = 0;
  }
  f(i, 8) {
    f(j, 8) {
      if (v[i][j] == '#') {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  ll ans = 0;
  f(i, 8) {
    f(j, 8) {
      if (!row[i] && !col[j]) {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tttt = 1;
  // cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve();
  }
}
