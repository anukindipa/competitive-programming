#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define fs(i, s, e) for (long long i = s; i < e; i++)
#define f(i, e) for (long long i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

void solve1() {
  // O(N^2) too slow
  string s;
  cin >> s;
  ll n = s.length();
  s = '0' + s;
  vector<vll> v;
  f(i, n + 1) {
    vll a(n + 1, 0);
    v.pb(a);
  }
  ll ans = 0;
  fs(i, 1, n + 1) {
    fs(j, i, n + 1) {
      if (i == j) {
        v[i][j] = s[i] - '0';
      } else {
        v[i][j] = s[j] - '0';
        v[i][j] += 10 * v[i][j - 1];
        v[i][j] = v[i][j] % 2019;
        if (v[i][j] == 0) {
          ans++;
        }
      }
    }
  }
  //  f(i, n + 1) {
  //    f(j, n + 1) {
  //      // cout << v[i][j] << " ";
  //    }
  //    // cout << endl;
  //  }
  cout << ans << endl;
  return;
}

void solve() {
  string s;
  cin >> s;
  ll n = s.length();
  vll v(n + 1);
  vll arr(2019, 0);
  v[n - 1] = s[n - 1] - '0';
  for (int i = n - 2; i > -1; i--) {
    v[i] = 10 * (s[i] - '0');
    v[i] += v[i + 1];
    v[i] = v[i] % 2019;
    arr[v[i]]++;
  }
  ll ans = 0;
  fs(i, 0, 2019) {
    ll cur = v[i];
    cur = cur * (cur - 1);
    cur /= 2;
    ans += cur;
  }
  for (auto x : v) {
    cout << x << ", ";
  }
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
  return 0;
}
