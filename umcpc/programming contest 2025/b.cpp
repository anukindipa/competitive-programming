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
  gll(k);
  vll v(n);
  ll mx = 0;
  vll arr(2000000);

  f(i, n) {
    cin >> v[i];
    mx = max(mx, v[i]);
    arr[v[i]]++;
  }
  mx++;
  ll ans = mx;
  for (ll i = 1; i < 2000000; i++) {
    arr[i] = arr[i] + arr[i - 1];
    if (2 * arr[i] - n > k) {
      ans = min(ans, i - 1);
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
