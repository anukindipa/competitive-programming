#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

ll dis(ll a1, ll a2, ll b1, ll b2) {
  ll a = pow((b1 - a1), 2) + pow((b2 - a2), 2);
  return a;
}

void solve() {
  int a1, a2, b1, b2, c1, c2;
  cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
  ll ab = dis(a1, a2, b1, b2);
  ll ac = dis(a1, a2, c1, c2);
  ll bc = dis(b1, b2, c1, c2);
  vector<ll> v = {ab, bc, ac};
  sort(v.begin(), v.end());
  bool ans = (v[1] + v[0] == v[2]);
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
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
