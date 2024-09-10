#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

// DP Aproach
// https://codeforces.com/contest/1992/my
// AFTER 9 ATTEMPTS ACCEPTED

// Greedy could also work and is better in terms of time
// idea is jump as far as you can into the water
// if there is a log near max jump jump there instead

void solvee() {
  ll n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  s = s + 'L';
  vll distS(n + 1);

  for (int i = 0; i <= n; i++) {
    distS[i] = 1e6;
  }
  for (int i = 0; i < m && i < n + 1; i++) {
    if (!(s[i] == 'C')) {
      distS[i] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    if (distS[i] < k + 1) {
      if (s[i] == 'L') {
        for (int j = 1; j <= m && ((i + j) < n + 1); j++) {
          if (!(s[i + j] == 'C')) {
            distS[i + j] = min(distS[i], distS[i + j]);
          }
        }
      }
      if (s[i] == 'W') {
        if (s[i + 1] == 'W') {
          distS[i + 1] = min(distS[i + 1], distS[i] + 1);
        } else if (s[i + 1] == 'L') {
          distS[i + 1] = min(distS[i + 1], distS[i] + 1);
        }
      }
    }
  }
  if (distS[n] < (k + 1)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tttt;
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    solvee();
  }
  return 0;
}