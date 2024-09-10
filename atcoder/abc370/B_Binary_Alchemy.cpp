#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  ll n;
  cin >> n;
  ll arr[n][n];
  f(i, 0, n) {
    f(j, 0, i + 1) {
      cin >> arr[i][j];
    }
  }
  ll cur = 0;
  f(c, 0, n) {
    ll a = min(cur, c);
    ll b = max(cur, c);
    cur = arr[b][a];
    cur--;
  }
  cout << cur + 1 << endl;
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
