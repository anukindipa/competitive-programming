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

ll find(ll x, vll& p) {
  if (p[x] == x) {
    return x;
  }
  return find(p[x], p);
}

void add(ll x, ll sco, vll& p, vll& sc) {
  ll prnt = find(x, p);
  sc[prnt] += sco;
}

void jin(ll x, ll y, vll& p, vll& sc, vll& sz) {
  ll a = find(x, p);
  ll b = find(y, p);
  if (a == b) {
    return;
  }
  if (sz[b] > sz[a]) {
    swap(a, b);
  }
  p[b] = a;
  sz[a] += sz[b];
  sc[b] -= sc[a];
}

ll get_score(ll x, vll& p, vll& sc) {
  if (p[x] == x) {
    return sc[x];
  }
  return sc[x] + get_score(p[x], p, sc);
}

void solve() {
  gll(n);
  gll(q);
  vll p(n);
  vll sz(n);
  vll sc(n);
  f(i, n) {
    p[i] = i;
    sz[i] = 1;
    sc[i] = 0;
  }
  f(i, q) {
    string s;
    cin >> s;
    if (s == "add") {
      gll(aa);
      aa--;
      gll(bb);
      add(aa, bb, p, sc);
    } else if (s == "join") {
      gll(aa);
      gll(bb);
      aa--;
      bb--;
      jin(aa, bb, p, sc, sz);

    } else {
      gll(aa);
      aa--;
      cout << get_score(aa, p, sc) << endl;
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
