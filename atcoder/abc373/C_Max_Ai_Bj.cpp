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
const ll MIN = LLONG_MIN;

void solve() {
  gll(n);
  ll ii = 0;
  ll im = MIN;
  f(i, n) {
    gll(aa);
    if (aa > im) {
      im = aa;
      ii = i;
    }
  }
  ll jj = 0;
  ll jim = MIN;
  f(i, n) {
    gll(aa);
    if (aa > jim) {
      jim = aa;
      jj = i;
    }
  }
  cout << im + jim;
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
