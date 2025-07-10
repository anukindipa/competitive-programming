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

const ll INF = LLONG_MAX;

void solve() {
  gll(n);
  vll v(n);
  ll sm = 0;
  f(i, n) {
    cin >> v[i];
    sm += v[i];
  }
  ll a = 1 << n;
  ll mn = INF;
  f(i, a) {
    ll csm = 0;
    f(j, n) {
      if (i & (1 << j)) {
        csm += v[j];
      }
    }
    ll csm2 = sm - csm;
    csm = max(csm2, csm);
    mn = min(mn, csm);
  }
  cout << mn << endl;
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
