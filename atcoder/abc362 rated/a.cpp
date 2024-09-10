#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

void solve() {
  int r, g, b;
  cin >> r >> g >> b;
  string s;
  cin >> s;
  if (s == "Red") {
    cout << min(g, b) << endl;
  }
  if (s == "Blue") {
    cout << min(g, r) << endl;
  }
  if (s == "Green") {
    cout << min(r, b) << endl;
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
