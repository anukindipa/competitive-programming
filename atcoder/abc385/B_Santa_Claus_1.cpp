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
  gll(h);
  gll(w);
  gll(x);
  gll(y);
  x--;
  y--;
  vector<char> vvvvv(w);
  vector<vector<char>> v(h, vvvvv);
  f(i, h) {
    f(j, w) {
      cin >> v[i][j];
    }
  }
  string s;
  cin >> s;
  set<pair<int, int>> ss;
  f(i, s.length()) {
    char c = s[i];
    if (c == 'L') {
      if (y > 0) {
        if (v[x][y - 1] == '.') {
          y = y - 1;
        } else if (v[x][y - 1] == '@') {
          y = y - 1;
          ss.insert({x, y});
        }
      }
    }
    if (c == 'R') {
      if (y < w - 1) {
        if (v[x][y + 1] == '.') {
          y = y + 1;
        } else if (v[x][y + 1] == '@') {
          y = y + 1;
          ss.insert({x, y});
        }
      }
    }
    if (c == 'U') {
      if (x > 0) {
        if (v[x - 1][y] == '.') {
          x--;
        } else if (v[x - 1][y] == '@') {
          x--;
          ss.insert({x, y});
        }
      }
    }
    if (c == 'D') {
      if (x < h - 1) {
        if (v[x + 1][y] == '.') {
          x++;
        } else if (v[x + 1][y] == '@') {
          x++;
          ss.insert({x, y});
        }
      }
    }
    // cout << x + 1 << " " << y + 1 << endl;
  }
  cout << x + 1 << " " << y + 1 << " " << ss.size() << endl;
  // cin >> s;
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
