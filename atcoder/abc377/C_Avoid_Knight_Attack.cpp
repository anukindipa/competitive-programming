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

bool oka(ll n, ll i, ll j) {
  if (i < 1 || i > n || j < 1 || j > n) {
    return 0;
  }
  return 1;
}

void solve() {
  gll(n);
  gll(m);
  set<pair<ll, ll>> p;
  f(i, m) {
    gll(a);
    gll(b);
    p.insert({a, b});
    if (oka(n, a + 2, b + 1)) {
      p.insert({a + 2, b + 1});
    }
    if (oka(n, a + 1, b + 2)) {
      p.insert({a + 1, b + 2});
    }
    if (oka(n, a - 1, b + 2)) {
      p.insert({a - 1, b + 2});
    }
    if (oka(n, a - 2, b + 1)) {
      p.insert({a - 2, b + 1});
    }
    if (oka(n, a - 2, b - 1)) {
      p.insert({a - 2, b - 1});
    }
    if (oka(n, a - 1, b - 2)) {
      p.insert({a - 1, b - 2});
    }
    if (oka(n, a + 1, b - 2)) {
      p.insert({a + 1, b - 2});
    }
    if (oka(n, a + 2, b - 1)) {
      p.insert({a + 2, b - 1});
    }
  }
  cout << n * n - p.size() << endl;
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
