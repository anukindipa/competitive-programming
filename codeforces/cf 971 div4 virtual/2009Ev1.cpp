#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;
// (k+i)(k+i-1)/2 - k(k-1)/2 - (k+n)(k+n-1)/2 +   (k+i)(k+i-1)/2
// (k+i)(k+i-1) - (k)(k-1)(k+n)(k+n-1)/2
// find i such that the thing above is minimized. O(n). works because sencond
// term is all constants
//

ll fx(ll x) {
  __int128_t aa = (x - 1) * x;
  aa = aa / 2;
  return (ll)aa;
}
ll rx(ll i, ll c, ll d) {
  __int128_t aa = i * i;
  aa += i * c;
  aa += d;
  return (ll)aa;
}

long double quad(ll c, ll d) {
  long double a = sqrt(c * c - 4 * d) - c;
  a = a / 2;
  return a;
}
void solve() {
  ll n, k;
  cin >> n >> k;
  ll c = (2 * k) - 1;
  ll d = fx(k) - fx(k + n);
  ll i1 = floor(quad(c, d));
  ll i2 = ceil(quad(c, d));
  cout << min(abs(rx(i1, c, d)), abs(rx(i2, c, d))) << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tttt = 1;
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve();
  }
}
