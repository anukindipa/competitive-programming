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
  vll v;
  f(i, 3) {
    ll aa;
    cin >> aa;
    v.pb(aa);
  }
  sort(v.begin(), v.end());
  ll a = v[0];
  ll b = v[1];
  ll c = v[2];
  bool ans = 0;
  if (a == c) {
    ans = 1;
  }
  if (a + b == c) {
    ans = 1;
  }
  string s = ans ? "Yes\n" : "No\n";
  cout << s;
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
