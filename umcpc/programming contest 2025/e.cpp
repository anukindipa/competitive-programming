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

bool k(int i, int j, int n) {
  if (i > -1 and j > -1 and i < n and j < n) {
    return true;
  }
  return false;
}

void solve() {
  gll(n);
  vector<vector<int>> v;
  f(i, n) {
    vector<int> vvv;
    f(j, n) {
      vvv.pb(0);
    }
    v.pb(vvv);
  }
  v[0][0] = 1;
  vll c = {0, 0};
  int d = 0;

  f(i, n) {
    char cc;
    cin >> cc;
    if (cc == 'F') {
      if (d == 0) {
        c[1] += 1;
      } else if (d == 1) {
        c[0] += 1;
      } else if (d == 2) {
        c[1] -= 1;
      } else {
        c[0] -= 1;
      }
    }
    if (cc == 'R') {
      d += 1;
      d = d % 4;
    }
    if (cc = 'L') {
      d -= 1;
      d = d % 4;
    }
  }
  f(i, n) {}
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
