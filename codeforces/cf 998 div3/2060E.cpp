#include <bits/stdc++.h>

using namespace std;

#define ll int

#define vi vector<int>
#define vll vector<long long>

#define fs(i, s, e) for (long long int i = s; i < e; i++)
#define f(i, e) for (long long int i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

ll find(int x, vll& parents) {
  if (parents[x] == x) {
    return x;
  }
  parents[x] = find(parents[x]);
}

bool unite(int x, int y, vll& parents, vll& sizes) {
  int xr = find(x, parents);
  int yr = find(y, parents);
  if (xr == yr) {
    return false;
  }
  if (sizes[xr] < sizes[yr]) {
    swap(xr, yr);
  }
  sizes[xr] += sizes[yr];
  parents[yr] = xr;
  return true;
}

bool connected(int x, int y, vll& parents) {
  return find(x, parents) == find(y, parents);
}

void solve() {
  gll(n);
  gll(m1);
  gll(m2);
  vll parentsG(n);
  vll sizeG(n, 1);
  vector<vll> v(n);
  f(i, n) {
    parentsG[i] = i;
  }
  /// m111
  f(i, m1) {
    gll(a);
    gll(b);
    a--;
    b--;
    v[a].pb(b);
    v[b].pb(a);
  }
  f(i, m2) {
    gll(a);
    gll(b);
    a--;
    b--;
    unite(a, b, parentsG, sizeG);
  }
  f(i, n) {
    vll vv = v[i];
    for (auto x : vv) {
      if (!connected(i, x)) {
        vv.erase(find(vv.begin(), vv.end(), x));
      }
    }
    v[i] = vv;
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
