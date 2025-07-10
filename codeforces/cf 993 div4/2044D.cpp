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
  vector<bool> y(n + 1);
  vector<bool> used(n + 1);
  f(i, n) {
    cin >> v[i];
    y[v[i]] = 1;
  }
  vll s;
  f(i, n + 1) {
    if (i && !y[i]) {
      s.pb(i);
    }
  }
  f(i, n) {
    if (used[v[i]]) {
      v[i] = s.back();
      s.pop_back();
    } else {
      used[v[i]] = 1;
    }
  }

  for (auto x : v) {
    cout << x << " ";
  }
  cout << endl;
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
