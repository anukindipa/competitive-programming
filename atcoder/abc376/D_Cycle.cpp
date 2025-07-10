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

const ll INF = LLONG_MAX;

void solve() {
  gll(n);
  gll(m);
  vector<vll> g(n);
  f(i, m) {
    gll(aaa);
    gll(baa);
    aaa--;
    baa--;
    g[aaa].pb(baa);
  }
  queue<pair<ll, ll>> q;
  vll dist(n, INF);
  q.push({0, 0});
  dist[0] = 0;
  ll ans = INF;
  while (!q.empty()) {
    ll cur = q.front().first;
    ll d = q.front().second;
    q.pop();
    for (auto x : g[cur]) {
      if (x == 0) {
        ans = min(ans, d + 1);
      }
      if (dist[x] == INF) {
        dist[x] = d + 1;
        q.push({x, dist[x]});
      }
    }
  }
  if (ans < INF) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
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
