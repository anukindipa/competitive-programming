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
  vector<vll> v;
  vll strt = {0, 0};
  long double cost = 0;
  f(i, n) {
    gll(a);
    gll(b);
    v.pb({a, b});
  }
  v.pb({0, 0});
  f(i, n + 1) {
    ll a = strt[0];
    ll b = strt[1];
    ll c = v[i][0];
    ll d = v[i][1];
    long double curd = sqrtl(pow((a - c), 2) + pow((b - d), 2));
    cost += curd;
    strt = {c, d};
  }
  cout << fixed << setprecision(7) << cost << endl;
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
