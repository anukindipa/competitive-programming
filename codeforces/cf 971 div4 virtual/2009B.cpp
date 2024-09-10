#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s[0] == '#') {
      v.push_back(1);
    }
    if (s[1] == '#') {
      v.push_back(2);
    }
    if (s[2] == '#') {
      v.push_back(3);
    }
    if (s[3] == '#') {
      v.push_back(4);
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    cout << v[i] << " ";
  }
  cout << endl;
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
