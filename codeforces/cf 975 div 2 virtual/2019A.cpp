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
  ll mx = 0;
  vll v(n);
  ll oddn;
  ll evenn;
  if (n % 2 == 0) {
    oddn = n / 2;
    evenn = n / 2;
  } else {
    evenn = n / 2;
    evenn++;
    oddn = n / 2;
  }
  f(i, n) {
    cin >> v[i];
    ll c = i % 2 ? oddn : evenn;
    mx = max(mx, v[i] + c);
  }
  cout << mx << endl;

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
