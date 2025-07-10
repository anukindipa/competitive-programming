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
  string s;
  cin >> s;
  ll c = 0;
  f(i, s.length() - 2) {
    if (s.substr(i, 3) == "ABC")
      c++;
  }
  f(qqq, q) {
    gll(x);
    char r;
    cin >> r;
    x--;
    ll altrd = 0;
    // see how many substrings containings xth char were == ABC
    if (x - 2 > -1) {
      if (s.substr(x - 2, 3) == "ABC")
        altrd++;
    }
    if (x - 1 > -1) {
      if (s.substr(x - 1, 3) == "ABC")
        altrd++;
    }
    if (s.substr(x, 3) == "ABC")
      altrd++;

    s[x] = r;
    ll paltrd = 0;
    if (x - 2 > -1) {
      if (s.substr(x - 2, 3) == "ABC")
        paltrd++;
    }
    if (x - 1 > -1) {
      if (s.substr(x - 1, 3) == "ABC")
        paltrd++;
    }
    if (s.substr(x, 3) == "ABC")
      paltrd++;
    c = c - altrd + paltrd;
    cout << c << endl;
  }
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
