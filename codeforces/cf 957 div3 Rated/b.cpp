#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

void solvee() {
  ll n, k;
  cin >> n >> k;
  vll v;
  ll mx = 0;
  for (int i = 0; i < k; i++) {
    ll xxx;
    cin >> xxx;
    mx = max(mx, xxx);
  }
  cout << 2 * (n - mx) - k + 1 << endl;

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