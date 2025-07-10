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

void dfs(int a, int b, vector<vll>& v, int r, int c) {
  if (v[a][b])
    return;
  v[a][b] = 2;
  if (a + 1 < r) {
    dfs(a + 1, b, v, r, c);
  }
  if (a > 1) {
    dfs(a - 1, b, v, r, c);
  }
  if (b > 1) {
    dfs(a, b - 1, v, r, c);
  }
  if (b + 1 < c) {
    dfs(a, b + 1, v, r, c);
  }
}

void solve() {
  gll(r);
  gll(c);
  vector<vll> v;
  f(i, r) {
    vll vvv(c);
    f(j, c) {
      cin >> vvv[j];
    }
    v.pb(vvv);
  }
  // dfs(0, 0, v, r, c);
  /*
  if (v[r - 1][c - 1] == 2) {
    cout << "Air-Wall-Exit" << endl;
  } else {
    cout << "DEAD" << endl;
  }
  */
  bool ok = true;
  int h = 0;
  gll(k);
  f(i, k) {
    ll a, b;
    cin >> a >> b;
    if (v[a][b] != h) {
      ok = false;
    } else {
      v[a][b] = (h);
    }
    h = h + 1;
    h = h % 2;
  }
  if (v[r - 1][c - 1] != h and ok) {
    cout << "Air-Wall-Exit\n";
  } else {
    cout << "DEAD\n";
  }
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
