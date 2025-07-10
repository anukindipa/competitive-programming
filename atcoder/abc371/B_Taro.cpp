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

void solve();

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

void solve() {
  gll(n);
  gll(m);
  bool arr[n];
  f(i, n) {
    arr[i] = 0;
  }
  f(i, m) {
    gll(c);
    char s;
    cin >> s;
    if (s == 'F') {
      cout << "No" << endl;
    } else if (arr[c - 1]) {
      cout << "No" << endl;
    } else {
      arr[c - 1] = 1;
      cout << "Yes" << endl;
    }
  }
  return;
}
