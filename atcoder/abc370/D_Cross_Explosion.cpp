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

void rem(set<ll>& s, vector<set<ll>>& v, ll c, ll h) {
  auto ff = s.find(c);
  if (ff != s.end()) {
    s.erase(ff);
    v[h].erase(*ff);
    return;
  }
  auto low = s.lower_bound(c);
  auto upp = s.upper_bound(c);
  ll a, b;
  if (low != s.begin()) {
    a = *prev(low);
    s.erase(prev(low));
    v[a].erase(c);
  }
  if (upp != s.end()) {
    b = *upp;
    s.erase(upp);
    v[b].erase(c);
  }
  return;
}

void solve() {
  gll(h);
  gll(w);
  gll(q);
  vector<set<ll>> v1, v2;
  f(i, h) {
    set<ll> sss;
    f(j, w) {
      sss.insert(j);
    }
    v1.pb(sss);
  }
  f(i, w) {
    set<ll> sss;
    f(j, h) {
      sss.insert(j);
    }
    v2.pb(sss);
  }

  f(kk, q) {
    gll(r);
    gll(c);
    r--;
    c--;
    rem(v1[r], v2, c, r);
    rem(v2[c], v1, r, c);
  }
  ll ans = 0;
  f(i, h) {
    ans += v1[i].size();
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
