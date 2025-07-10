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

void solve();

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

void solve() {
  gll(n);
  vector<ll> v(n);
  map<ll, ll> m;
  unordered_set<ll> s;
  sort(v.begin(), v.end());
  f(i, n) {
    cin >> v[i];
    s.insert(v[i]);
  }
  f(i, n) {
    gll(l);
    m[v[i]] = l;
  }
  gll(q);
  f(qq, q) {
    gll(l);
    gll(r);
  }
  return;
}