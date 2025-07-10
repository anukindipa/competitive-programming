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
  string s;
  cin >> s;
  vector<ll> v;
  f(i, 26) {
    v.pb(s[i] - 'A');
  }
  ll dist = 0;
  fs(i, 0, 25) {
    int indx0 = find(v.begin(), v.end(), i) - v.begin();
    int indx1 = find(v.begin(), v.end(), i + 1) - v.begin();
    dist += abs(indx1 - indx0);
  }
  cout << dist << endl;
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
