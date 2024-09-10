#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void dfs(ll a,
         ll b,
         ll h,
         ll w,
         vector<vll>& v,
         vector<vector<bool>>& visited,
         ll l,
         ll& newadd) {
  visited[a][b] = 1;
  if (v[a][b] <= l) {
    if (v[a][b] != -1) {
      newadd++;
    }
    v[a][b] = -1;
  } else {
    return;
  }
  if (a + 1 < h) {
    if (!visited[a + 1][b] && v[a + 1][b] <= l) {
      dfs(a + 1, b, h, w, v, visited, l, newadd);
    }
  }
  if (a - 1 > -1) {
    if (!visited[a - 1][b] && v[a - 1][b] <= l) {
      dfs(a - 1, b, h, w, v, visited, l, newadd);
    }
  }
  if (b + 1 < w) {
    if (!visited[a][b + 1] && v[a][b + 1] <= l) {
      dfs(a, b + 1, h, w, v, visited, l, newadd);
    }
  }
  if (b - 1 > -1) {
    if (!visited[a][b - 1] && v[a][b - 1] <= l) {
      dfs(a, b - 1, h, w, v, visited, l, newadd);
    }
  }
  return;
}

void solve() {
  ll h, w, y;
  cin >> h >> w >> y;
  vector<vll> v;
  ll mn = 1000000;
  ll mx = 0;
  vector<vector<bool>> v33;
  f(i, 0, h) {
    vll vvvv(w);
    vector<bool> v0(w);
    f(j, 0, w) {
      cin >> vvvv[j];
      mn = min(mn, vvvv[j]);
      mx = max(mx, vvvv[j]);
      v0[j] = 0;
    }
    v33.pb(v0);
    v.pb(vvvv);
  }
  ll cur = 0;
  ll dim = h * w;
  f(i, 0, y) {
    ll newadd = 0;
    if (i >= mx) {
      cout << 0 << endl;
    } else {
      ll ans = 0;
      vector<vector<bool>> visited = v33;
      f(j, 0, h) {
        f(k, 0, w) {
          if ((j == 0 || k == 0 || j == h - 1 || k == w - 1)) {
            dfs(j, k, h, w, v, visited, i + 1, newadd);
          }
        }
      }

      cout << dim - cur - newadd << endl;
    }
    cur += newadd;
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
