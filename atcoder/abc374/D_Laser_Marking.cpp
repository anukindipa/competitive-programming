// Very Clumsy Complete Search
// O(2^n * n!)

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

#define vi vector<int>
#define vll vector<long long>

#define fs(i, s, e) for (long long int i = s; i < e; i++)
#define f(i, e) for (long long int i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ld a;        \
  cin >> a

const ll INF = 1e9;

void solve() {
  ll n;
  cin >> n;
  gll(s);
  gll(t);
  vector<vector<vector<ld>>> v;
  vector<long double> ps(n);
  ld ans = LDBL_MAX;
  vll arr;
  f(i, n) {
    arr.pb(i);
    gll(aa);
    gll(bb);
    gll(cc);
    gll(dd);
    ld dists = (cc - aa) * (cc - aa) + (dd - bb) * (dd - bb);
    ld dist = sqrt(dists);
    ps[i] = dist / t;
    vector<vector<ld>> vvv = {{aa, bb}, {cc, dd}};
    v.push_back(vvv);
  }
  do {
    f(i, 1 << n) {
      vector<ld> pos = {0, 0};
      long double tm = 0;
      f(j, n) {
        if (i & (1 << j)) {
          ll c = arr[j];
          ll a = v[c][0][0];
          ll b = v[c][0][1];
          ll x = pos[0];
          ll y = pos[1];
          ld dss = pow((x - a), 2) + pow((y - b), 2);
          dss = sqrt(dss);
          tm += ps[c];
          tm += (dss / s);
          // travel from pos to (a,b)
          // travel from (a,b)->(c,d)
          // pos = {c,d}
          pos = {v[c][1][0], v[c][1][1]};
        } else {
          // travel from pos to (c,d)
          // travel from (c,d)->(a,b)
          // pos = {a,b}
          ll c = arr[j];
          ll a = v[c][1][0];
          ll b = v[c][1][1];
          ll x = pos[0];
          ll y = pos[1];
          ld dss = pow((x - a), 2) + pow((y - b), 2);
          dss = sqrt(dss);
          tm += ps[c];
          tm += (dss / s);
          pos = {v[c][0][0], v[c][0][1]};
        }
      }
      ans = min(tm, ans);
    }
  } while (next_permutation(arr.begin(), arr.end()));
  cout << fixed << ans << setprecision(16) << endl;
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
