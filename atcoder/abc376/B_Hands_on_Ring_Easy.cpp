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
  gll(q);
  ll l = 1;
  ll r = 2;
  ll ans = 0;
  f(i, q) {
    char h;
    cin >> h;
    gll(t);
    ll g;
    ll b;
    if (h == 'L') {
      g = l;
      b = r;
      l = t;
    } else {
      g = r;
      b = l;
      r = t;
    }
    if (g < t) {
      if (g < b && b < t) {
        ans += n - t + g;
      } else {
        ans += t - g;
      }
    }
    if (g > t) {
      swap(g, t);
      if (g < b && b < t) {
        ans += n - t + g;
      } else {
        ans += t - g;
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
