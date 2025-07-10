
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

int countp(vll v) {
  int ans = 0;
  f(i, 3) {
    if (v[i] + v[i + 1] == v[i + 2]) {
      ans++;
    }
  }
  return ans;
}
void solve() {
  vll v(5);
  int ans = 0;
  f(i, 5) {
    if (i != 2) {
      cin >> v[i];
    }
  }
  v[2] = v[0] + v[1];
  ans = max(ans, countp(v));
  v[2] = v[3] - v[1];
  ans = max(ans, countp(v));
  v[2] = v[4] - v[3];
  ans = max(ans, countp(v));
  cout << ans << endl;
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
