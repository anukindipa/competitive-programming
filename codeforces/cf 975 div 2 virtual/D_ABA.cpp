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
  string s;
  cin >> s;
  ll n = s.length();
  vector<vll> v(26);
  f(i, n) {
    int a = s[i] - 'A';
    v[a].pb(i);
  }
  ll ans = 0;
  f(i, 26) {
    vll c = v[i];
    ll sz = c.size();
    f(j, sz - 1) {
      if (c[j] + 1 == c[j + 1]) {
        fs(k, j + 2, sz) {
          ans += c[k] - c[j] - 1;
        }
      } else {
        fs(k, j + 1, sz) {
          ans += c[k] - c[j] - 1;
        }
      }
    }
  }
  cout << ans << endl;
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
