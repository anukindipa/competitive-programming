/*
https://judge.yosupo.jp/problem/unionfind
https://usaco.guide/gold/dsu?lang=cpp
*/

#include <bits/stdc++.h>

using namespace std;
#define ll int
#define vll vector<int>
#define f(i, e) for (ll i = 0; i < e; i++)

#define gll(a) \
  ll a;        \
  cin >> a

int parents[200005];

ll find(ll x, vll& parents) {
  return x == parents[x] ? x : parents[x] = find(parents[x], parents);
}

bool connected(ll a, ll b, vll& parents) {
  return find(a, parents) == find(b, parents);
}

void du(ll a, ll b, vll& parents) {
  ll aa = find(a, parents);
  ll bb = find(b, parents);
  parents[aa] = bb;
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  gll(n);
  gll(q);

  vll parents(n);

  f(i, n) {
    parents[i] = i;
  }
  f(i, q) {
    gll(t);
    gll(a);
    gll(b);
    if (t) {
      cout << connected(a, b, parents) << endl;
    } else {
      du(a, b, parents);
    }
  }
}
