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

void solve() {
  map<ll, ll> m;
  f(i, 7) {
    gll(a);
    m[a]++;
  }
  vll v;
  for (auto x : m) {
    v.pb(x.second);
  }
  sort(v.rbegin(), v.rend());
  string ans = (v.size() > 1 && v[0] > 2 && v[1] > 1) ? "Yes\n" : "No\n";
  cout << ans;
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
