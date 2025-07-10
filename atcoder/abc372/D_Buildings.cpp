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
  vll v(n);
  f(i, n) {
    cin >> v[i];
  }
  /*
  DP like approach which is inefficient
  vll v2(n+1);
  v2[n]=0;
  v2[n-1]=0;
  v2[n-2]=1;
  fs(i,3,n){
    ll c = n -i;
    ll h = v[c-1];
    ll  c2 = c;
    while(c2<n){

    }

  }
  */
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
