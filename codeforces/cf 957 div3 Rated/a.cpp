#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i < 5; i++) {
    if ((((a + 1) * b * c) >= ((b + 1) * a * c)) &&
        (((a + 1) * b * c) >= ((c + 1) * a * b))) {
      a++;
    } else if ((((b + 1) * a * c) >= ((a + 1) * b * c)) &&
               (((b + 1) * a * c) >= ((c + 1) * a * b))) {
      b++;
    } else {
      c++;
    }
  }
  cout << a * b * c << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}