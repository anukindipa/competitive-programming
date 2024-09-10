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
  vll v;
  for (int i = n; i > m; i--) {
    v.pb(i);
  }
  for (int i = 1; i < m + 1; i++) {
    v.pb(i);
  }
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  return;
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