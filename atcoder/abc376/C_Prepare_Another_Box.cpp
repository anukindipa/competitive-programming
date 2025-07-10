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
  vll t(n);
  vll b(n);
  f(i, n) {
    cin >> t[i];
  }
  b[n] = 0;
  f(i, n - 1) {
    cin >> b[i];
  }
  sort(t.begin(), t.end());
  sort(b.begin(), b.end());

  ll unsrt = -1;
  bool cn = 1;
  ll bc = n - 1;
  for (ll i = n - 1; i > -1; i--) {
    ll gg = t[i];
    if (t[i] <= b[bc]) {
      bc = bc - 1;
    } else {
      if (unsrt > -1) {
        cn = 0;
      }
      unsrt = t[i];
    }
  }
  if (!cn) {
    cout << -1 << endl;
  } else {
    cout << unsrt << endl;
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
