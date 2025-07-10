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
  gll(q);
  vll v(n);
  f(i, n) {
    cin >> v[i];
  }
  vll ns(n * n);
  vll node(n);
  fs(i, 1, n + 1) {
    ll l = i - 1;
    ll r = n - i;
    node[i - 1] = (l * r) + l + r;
    ns[node[i - 1]]++;
  }
  vll bet(n - 1);
  vll nbe(n - 1);
  fs(i, 1, n) {
    ll l = i;
    ll r = n - i;
    bet[i - 1] = l * r;
    nbe[i - 1] = v[i] - v[i - 1] - 1;
    ns[bet[i - 1]] += nbe[i - 1];
  }
  f(i, q) {
    gll(k);
    /*
    ll ans = 0;
    f(i, n) {
      if (node[i] == k) {
        ans++;
      }
    }
    f(i, n - 1) {
      if (bet[i] == k) {
        ans += nbe[i];
      }
    }
    */
    if (k < n * n) {
      cout << ns[k] << endl;
    } else {
      cout << 0 << endl;
    }
  }
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
