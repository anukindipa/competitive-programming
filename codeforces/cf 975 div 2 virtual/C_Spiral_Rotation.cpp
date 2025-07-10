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
  gll(n);
  vector<vll> v(n);
  f(i, n) {
    string s;
    cin >> s;
    vll ccc(n);
    f(j, n) {
      if (s[j] == '.') {
        ccc[j] = 1;
      } else {
        ccc[j] = 0;
      }
    }
    v[i] = ccc;
  }
  vector<vll> v1, v2, v3, v4, v0;
  v0 = v;
  f(i, n / 2) {
    vector<vll> ar2 = v;
    ll cc = (i + 1) % 4;
    f(j, cc) {
      fs(k, i, n - i) {
        ar2[k][n - i - 1] = v[i][k];
        ar2[n - i - 1][n - 1 - k] = v[k][n - i - 1];
        ar2[n - 1 - k][i] = v[n - i - 1][n - 1 - k];
        ar2[i][k] = v[n - 1 - k][i];
      }
      v = ar2;
    }
    v = ar2;
  }
  f(i, n) {
    f(j, n) {
      if (v[i][j]) {
        cout << '.';
      } else {
        cout << '#';
      }
    }
    cout << endl;
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
