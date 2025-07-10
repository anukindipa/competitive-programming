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
  gll(n);
  vector<float> p(n);
  ll mn = 21;
  float sum = 0;
  f(i, n) {
    cin >> p[i];
    if (p[i] < mn) {
      mn = p[i];
    }
    sum += p[i];
  }
  ll bd = sum;

  if (n > 2) {
    sum -= 1 * mn;
  }
  if (n > 4 && n < 7) {
    sum = 0.9 * sum;
  }
  if (n > 6) {
    sum = 0.85 * sum;
  }
  if (bd <= 20) {
    sum += 5;
  }
  if (bd > 20 && bd < 50) {
    sum += 3;
  }

  printf("%.2lf\n", sum);

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
