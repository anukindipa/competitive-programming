#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  int h, w;
  int si, sj;
  cin >> h >> w >> si >> sj;
  si--;
  sj--;
  char arr[h][w];
  f(i, 0, h) {
    f(j, 0, w) {
      cin >> arr[i][j];
    }
  }
  string x;
  cin >> x;
  for (int i = 0; i < x.length(); i++) {
    char curr = x[i];
    if (curr == 'U' && si - 1 > 0) {
      if (arr[si - 1][sj] == '.') {
        si--;
      }
    }
    if (curr == 'D' && si + 1 < h) {
      if (arr[si + 1][sj] == '.') {
        si++;
      }
    }
    if (curr == 'L' && sj - 1 > 0) {
      if (arr[si][sj - 1] == '.') {
        sj--;
      }
    }
    if (curr == 'R' && sj + 1 < w) {
      if (arr[si][sj + 1] == '.') {
        sj++;
      }
    }
  }
  cout << si + 1 << " " << sj + 1;
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
