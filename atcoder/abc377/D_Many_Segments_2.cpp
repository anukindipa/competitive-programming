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
  gll(m);
  vector<pair<ll, ll>> v;
  f(i, n) {
    gll(a);
    gll(b);
    v.pb({b, a});
  }
  v.pb({m + 1, m + 1});

  sort(v.begin(), v.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first == b.first)
      return a.second > b.second;
    return a.first < b.first;
  });

  ll cur = 0;
  ll ans = 0;
  ll curl = v[0].second;
  fs(i, 1, m + 1) {
    if (v[cur + 1].first == i) {
      cur++;
      curl = max(curl, v[cur].second);
    }
    if (v[cur].first > i) {
      ans += i;
    } else {
      ll r = v[cur].first;
      r = i;
      ans += r - curl;
      if (r - curl > 0) {
        // cout << r << endl;
      }
    }
  }
  cout << ans << endl;
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
