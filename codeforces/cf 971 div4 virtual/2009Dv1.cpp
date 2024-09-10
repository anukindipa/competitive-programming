// version 1
// O(N^3) TLE
#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

int dist(int x1, int y1, int x2, int y2) {
  return pow((x2 - x1), 2) + pow((y2 - y1), 2);
}

void solve() {
  int n;
  ll fin = 0;
  cin >> n;
  vector<pair<int, int>> v;
  for (int kk = 0; kk < n; kk++) {
    int a, b;
    cin >> a >> b;
    pair<int, int> vvv = {a, b};
    v.pb(vvv);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        ll a = dist(v[i].first, v[i].second, v[j].first, v[j].second);
        ll b = dist(v[k].first, v[k].second, v[j].first, v[j].second);
        ll c = dist(v[i].first, v[i].second, v[k].first, v[k].second);
        ll ans = a + b + c - 2 * max(a, max(b, c));
        if (ans == 0) {
          // cout << i << " " << j << " " << k << " " << endl;
          fin++;
        }
      }
    }
  }
  cout << fin << endl;
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
