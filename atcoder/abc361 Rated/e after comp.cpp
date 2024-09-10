#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

vector<bool> visited;               // for dfs
vector<vector<pair<ll, ll>>> conn;  // adjecentcy list
vll dis;                            // the length of path

void dfs(long long n) {
  visited[n] = 1;
  ll d = dis[n];
  vector<pair<ll, ll>> v = conn[n];
  for (auto x : v) {
    if (!x.first) {
      dis[x.first] = d + x.second;
      dfs(x.first);
    }
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long n;
  cin >> n;
  vector<pair<ll, ll>> mmm;
  for (long long i = 0; i < n; i++) {
    conn.pb(mmm);
    visited.pb(0);
    dis.pb(0);
  }

  for (long long i = 0; i < n - 1; i++) {
    long long xx, cc, dd;
    cin >> xx >> cc >> dd;
    xx--;
    cc--;
    pair<ll, ll> g1 = make_pair(cc, dd);
    pair<ll, ll> g2 = make_pair(xx, dd);
    conn[xx].pb(g1);
    conn[cc].pb(g2);
  }
  dfs(0);
  for (int i = 0; i < n; i++) {
    cout << dis[i] << endl;
  }
}