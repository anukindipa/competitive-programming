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
  string s, t;
  cin >> s >> t;
  bool cool = 1;
  f(i, min(s.length(), t.length())) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return;
    }
  }
  if (s.length() == t.length()) {
    cout << 0 << endl;
  } else {
    cout << min(s.length(), t.length()) + 1 << endl;
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
