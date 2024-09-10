#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  ll n;
  cin >> n;

  vector<pair<ll, ll>> sw;
  vector<pair<ll, ll>> sa;
  ll x, y;
  cin >> x >> y;

  for (ll i = 0; i < n; i++) {
    ll ai;
    cin >> ai;
    pair<ll, ll> pp = {ai, 0};
    pair<ll, ll> pp2 = {0, ai};
    sw.push_back(pp);
    sa.pb(pp2);
  }
  for (ll i = 0; i < n; i++) {
    ll ai;
    cin >> ai;
    pair<ll, ll> pp = sw[i];
    pp.second = ai;
    sw[i] = pp;
    pair<ll, ll> pp2 = sa[i];
    pp2.first = ai;
    sa[i] = pp2;
  }
  sort(sa.begin(), sa.end(), greater<>());
  sort(sw.begin(), sw.end(), greater<>());
  ll ans1 = 2 * 10e6;
  ll ans2 = 2 * 10e6;
  ll cursa = 0;
  ll cursw = 0;
  for (int i = 0; i < n; i++) {
    if (cursa < y + 1) {
      cursa += sa[i].first;
      ans1 = i;
    }
    if (cursw < x + 1) {
      cursw += sw[i].first;
      ans2 = i;
    }
  }
  ans1 = min(ans1 + 1, ans2 + 1);
  cout << min(ans1, n) << endl;
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
