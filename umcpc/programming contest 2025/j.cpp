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
  ll mn = 100000000;
  f(i, n) {
    cin >> v[i];
  }
  ll ss = 0;
  f(i, k) {
    ss += v[i];
  }
  ll mx = ss;
  for (int i = k; i < n + k; i++) {
    ss = ss - v[(i - k) % n] + v[i % n];
    mx = max(ss, mx);
  }
  cout << mx << endl;
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
