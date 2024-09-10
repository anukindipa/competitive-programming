// First time implementing dijkstra's algorithm
// Notes : Priority queue should be initialised like below because pq is is
// processed in accending order
/*
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
*/
// alternatively q.push({-(w + dist[a]), b}); can be used with default pq due to
// negative numbers and the first element in it should be the distance not the
// node (first wrong submission)
#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e18;

void solve() {
  int n, m;
  cin >> n >> m;
  vll w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  vector<vector<pair<ll, ll>>> adj(n);
  for (int i = 0; i < m; i++) {
    ll uu, vv, bb;
    cin >> uu >> vv >> bb;
    uu--;
    vv--;
    adj[uu].push_back({vv, bb + w[vv]});
    adj[vv].push_back({uu, bb + w[uu]});
  }
  /*
  for (auto x : adj) {
    for (auto y : x) {
      cout << y.first << ',' << y.second << " ";
    }
    cout << '\n';
  }
  */
  // dijikstra
  vll dist(n, INF);
  vector<bool> prosesed(n, false);
  dist[0] = w[0];
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  q.push({w[0], 0});
  while (!q.empty()) {
    ll a = q.top().second;
    q.pop();
    if (prosesed[a]) {
      continue;
    }
    prosesed[a] = true;
    for (auto u : adj[a]) {
      ll b = u.first;
      ll w = u.second;
      if (dist[a] + w < dist[b]) {
        dist[b] = dist[a] + w;
        q.push({w + dist[a], b});
      }
    }
  }

  for (int i = 1; i < n; i++) {
    cout << dist[i] << " ";
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
