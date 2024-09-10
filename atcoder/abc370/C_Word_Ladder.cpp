#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define fs(i, s, e) for (long long int i = s; i < e; i++)
#define f(i, e) for (long long int i = 0; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  string s, t;
  cin >> s >> t;
  ll n = s.length();
  vector<string> vs;
  while (s != t) {
    vector<string> v;
    f(i, n) {
      if (s[i] != t[i]) {
        string s2 = s;
        s2[i] = t[i];
        v.pb(s2);
      }
    }
    sort(v.begin(), v.end());
    s = v[0];
    vs.pb(s);
  }
  ll vss = vs.size();
  cout << vss << endl;
  f(i, vss) {
    cout << vs[i] << endl;
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
