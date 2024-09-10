#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

void solvee() {
  ll n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;

  vll swimdis(n + 1);
  vector<bool> pos(n + 1);
  if (pos[0] != 'C') {
    pos[0] = 1;
  }
  if (pos[0] == 'W') {
    swimdis[0] = k;
  }

  for (int i = 0; i < m && i < n + 2; i++) {
    char c = s[i];
    if (!(c == 'C')) {
      pos[i] = 1;
    } else {
      pos[i] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    char c = s[i];
    if (c == 'L') {
      for (int j = 1; j < m + 1; j++) {
        if ((i + j) < n + 2 && s[i + j] != 'C') {
          pos[i + j] = true;
          swimdis[i + j] = k;
        }
      }
    } else if (c == 'C') {
      pos[i] = 0;
    } else if (c == 'W') {
      bool noob = 1;
      for (int j = 0; (j <= swimdis[i]) && noob; j++) {
        if ((j + i) < n + 2) {
          if (s[i + j] == 'W') {
            pos[i + j] = 1;
            swimdis[i + j] = swimdis[i] - j;
          } else {
            noob = 0;
          }
        }
      }
    }
  }
  if (pos[n]) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int ttt;
  cin >> ttt;
  while (ttt--) {
    solvee();
  }
}