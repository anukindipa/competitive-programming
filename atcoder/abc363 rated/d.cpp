#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve(ll n) {
  // void solve() {
  //   ll n; cin >> n;
  if (n == 1) {
    cout << 0 << endl;
    return;
  }
  n--;
  ll wh = 0, d = 0;
  bool ct = 1;
  while (ct) {
    ll w2 = wh + 9 * pow(10, d / 2);
    if (w2 < n) {
      wh = w2;
      d++;
    } else {
      ct = 0;
    }
  }
  ll n2 = n - wh;
  ll nmsig = d / 2;
  nmsig++;
  ll mxp10 = 0;
  while (n2 > (ll)pow(10, mxp10 + 1)) {
    mxp10++;
  }
  mxp10 = d / 2;
  vll nms;
  for (int i = mxp10; i >= 0; i--) {
    ll xx = n2 / pow(10, i);
    if (i == mxp10) {
      xx++;
    }
    if (i == 0) {
      xx--;
    }
    nms.pb(xx);
    n2 = n2 % (ll)pow(10, i);
  }
  vll pb2 = nms;
  reverse(pb2.begin(), pb2.end());
  if (!(d % 2)) {
    nms.pop_back();
  }
  string ans;
  for (auto x : nms) {
    string sss = to_string(x);
    ans += sss;
  }
  for (auto x : pb2) {
    string sss = to_string(x);
    ans += sss;
  }
  cout << ans << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tttt = 1;
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve(ttt);
  }
}
