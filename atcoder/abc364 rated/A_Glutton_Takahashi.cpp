#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  int n;
  cin >> n;
  string pre = "";
  bool x = 1;
  f(i, 0, n) {
    string s;
    cin >> s;
    if (pre == "sweet" && s == pre && i < n - 1) {
      x = 0;
    }
    pre = s;
  }
  if (x)
    cout << "Yes\n";
  else
    cout << "No\n";
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
