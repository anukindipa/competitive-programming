#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

int dist(int x1, int y1, int x2, int y2) {
  return pow((x2 - x1), 2) + pow((y2 - y1), 2);
}

void solve() {
  int n;
  ll fin = 0;
  cin >> n;
  unordered_set<int> s0, s1;
  vector<int> v0, v1;
  for (int kk = 0; kk < n; kk++) {
    int a, b;
    cin >> a >> b;
    if (b) {
      s1.insert(a);
      v1.pb(a);
    } else {
      s0.insert(a);
      v0.pb(a);
    }
  }
  int n0 = v0.size();
  int n1 = v1.size();
  for (auto x : v0) {
    if (s1.find(x) != s1.end()) {
      fin += n1;
      fin--;
    }
    if (s1.find(x - 1) != s1.end() && s1.find(x + 1) != s1.end())
      fin++;
  }
  for (auto x : v1) {
    if (s0.find(x) != s0.end()) {
      fin += n0;
      fin--;
    }
    if (s0.find(x - 1) != s0.end() && s0.find(x + 1) != s0.end())
      fin++;
  }
  cout << fin << endl;
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
