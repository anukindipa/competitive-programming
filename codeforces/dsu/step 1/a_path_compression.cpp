#include <bits/stdc++.h>

using namespace std;

#define ll int

#define vll vector<ll>

#define f(i, e) for (ll i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

int find(ll x, vll& p) {
  return x == p[x] ? x : p[x] = find(p[x], p);
}

void du(ll a, ll b, vll& p) {
  ll aa = find(a, p);
  ll bb = find(b, p);
  p[aa] = bb;
  return;
}

bool conn(ll a, ll b, vll& p) {
  return find(p[a], p) == find(p[b], p);
}

void solve() {
  gll(n);
  gll(m);
  vll p(n);
  f(i, n) {
    p[i] = i;
  }
  f(i, m) {
    string s;
    cin >> s;
    gll(u);
    gll(v);
    u--;
    v--;
    if (s == "union") {
      du(u, v, p);
    } else {
      string o = conn(u, v, p) ? "YES" : "NO";
      cout << o << endl;
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
