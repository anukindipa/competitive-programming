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
  gll(n);
  gll(m);
  ll mx = 0;
  vector<vector<ll>> a;
  f(i, n) {
    f(j, m) {
      gll(k);
      if (k == mx) {
        a.pb({i, j});
      }
      if (k > mx) {
        mx = k;
        a = {{i, j}};
      }
    }
  }

  ll x = a[0][0];
  ll y = a[0][1];

  for (auto& i : a) {
    if (i[0] != x && i[1] != y) {
      cout << mx << "\n";
      return;
    }
  }

  cout << mx - 1 << "\n";

  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tttt = 1;
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve();
  }
}
