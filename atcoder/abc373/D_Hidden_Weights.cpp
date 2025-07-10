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

void dfs(int s,
         vector<bool>& visited,
         vll& ans,
         vector<vector<pair<ll, ll>>>& g) {
  if (visited[s]) {
    return;
  } else {
    visited[s] = 1;
    for (auto x : g[s]) {
      ll cur = x.first;
      ans[cur] = x.second + ans[s];
      dfs(cur, visited, ans, g);
    }
  }
}

void solve() {
  gll(n);
  gll(m);
  vector<vector<pair<ll, ll>>> g(n);
  f(i, m) {
    gll(uj);
    gll(vj);
    gll(wj);
    uj--;
    vj--;
    // This doesn't work if graph is like 0->2->1 etc no connection from 2to1
    // that will be of use. dfs will not visit properly.
    /*
     if (uj < vj) {
       g[uj].pb({vj, wj});
     } else {
       g[vj].pb({uj, 0 - wj});
     }
     */
    g[uj].pb({vj, wj});
    g[vj].pb({uj, 0 - wj});
  }

  // dfs
  vector<bool> visited(n, 0);
  vll ans(n, 0);
  f(i, n) {
    if (!visited[i]) {
      dfs(i, visited, ans, g);
    }
  }
  for (auto x : ans) {
    cout << x << " ";
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
