#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  ll n, q;
  cin >> n >> q;
  vector<ll> vec;
  f(i, 0, n) {
    ll xi;
    cin >> xi;
    vec.pb(xi);
  }
  sort(vec.begin(), vec.end());
  f(i, 0, q) {
    ll b, k;
    cin >> b >> k;
    auto p1 = lower_bound(vec.begin(), vec.end(), b);
    auto p2 = upper_bound(vec.begin(), vec.end(), b);
    ll strt;
    if (abs(*p1 - b) < abs(*p2 - b)) {
      strt = p1 - vec.begin();
    } else {
      strt = p2 - vec.begin() - 1;
    }
    ll strtr = strt;
    // cout << strt << "lower and upper" << strtr << endl;
    ll ans = vec[strt];
    k--;
    if (!k) {
      cout << abs(vec[strt] - b) << endl;
    } else {
      while (k) {
        if (strtr == n - 1) {
          strt--;
        } else if (strt == 0) {
          strtr++;
        } else if (abs(vec[strtr + 1] - b) < abs(vec[strt - 1] - b)) {
          strtr++;
        } else {
          strt--;
        }
        ans = max(abs(vec[strt] - b), abs(vec[strtr] - b));
        // cout << strt << " " << strtr << "ans: " << ans << endl;
        k--;
      }
      cout << abs(ans) << endl;
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
