#include <bits/stdc++.h>

using namespace std;

#define ll int

#define vll vector<ll>
#define vvl vector<vector<ll>>

#define f(i, e) for (ll i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

int find(ll x, vll& p) {
  return x == p[x] ? x : p[x] = find(p[x], p);
}

void du(ll a, ll b, vll& p, vvl& v) {
  ll aa = find(a, p);
  ll bb = find(b, p);
  if (aa != bb) {
    p[aa] = bb;
    ll sm = v[bb][0] + v[aa][0];
    ll mn = min(v[bb][1], v[aa][1]);
    ll mx = max(v[bb][2], v[aa][2]);
    v[bb] = {sm, mn, mx};
  }
  return;
}

bool conn(ll a, ll b, vll& p) {
  return find(p[a], p) == find(p[b], p);
}

void solve() {
  gll(n);
  gll(m);
  vll p(n);
  vvl v(n);
  f(i, n) {
    p[i] = i;
    v[i] = {1, i, i};
  }
  f(i, m) {
    string s;
    cin >> s;
    if (s == "union") {
      gll(u);
      gll(vv);
      u--;
      vv--;
      du(u, vv, p, v);
    } else {
      gll(u);
      u--;
      ll o = find(u, p);
      cout << v[o][1] + 1 << " " << v[o][2] + 1 << " " << v[o][0] << endl;
    }
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
