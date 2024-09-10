#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

bool isPal(string s) {
  string s2 = s;
  reverse(s.begin(), s.end());
  return (s2 == s);
}

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  ll ans = 0;
  cin >> s;
  sort(s.begin(), s.end());
  do {
    bool wal = 1;
    for (int i = 0; i < n - k + 1; i++) {
      string ch = s.substr(i, k);
      if (isPal(ch)) {
        // cout << ch << " " << s << ",  ";
        wal = 0;
      }
    }
    if (wal) {
      ans++;
    }
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
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
