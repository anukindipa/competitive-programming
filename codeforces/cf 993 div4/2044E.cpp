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
  // l1,r1 = l,r
  // l2,r2 = m,s
  ll ans = 0;
  gll(k);
  gll(l);
  gll(r);
  gll(m);
  gll(s);
  f(i, 33) {
    ll l2 = floor(m / pow(k, i));
    ll r2 = ceil(s / pow(k, i));
    if (l2 < r2) {
      ll aa = max(l2, l);
      ll bb = min(r2, r);
      ans += max((ll)0, (ll)1 + bb - aa);
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
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve();
  }
}
