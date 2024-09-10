#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

void solve() {
  int n;
  cin >> n;
  vll x(n);
  vll y(n);
  ll mn = 0, mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    mn += x[i];
    mx += y[i];
  }
  ll mmn = mn;
  mn = 0 - mn;
  if (mmn <= 0 && mx >= 0) {
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
      ll dif = y[i] - x[i];
      if (mn <= 0) {
        cout << x[i] << " ";
      } else if (dif > mn) {
        cout << x[i] + mn << " ";
        mn = 0;
      } else {
        cout << y[i] << " ";
        mn = mn - dif;
      }
    }
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
