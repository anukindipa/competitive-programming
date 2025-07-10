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
  vll v(n);
  f(i, n) {
    cin >> v[i];
  }
  f(i, n - 1) {
    ll c = min(v[i], v[i + 1]);
    v[i] -= c;
    v[i + 1] -= c;
  }
  bool x = true;
  f(i, n - 1) {
    if (v[i + 1] < v[i]) {
      x = false;
    }
  }

  if (x) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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
