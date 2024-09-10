// I dont know whats wrong ;-;
// 999999999999999999 but using this number brings a wrong answer
#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  ll n;
  cin >> n;
  if (n == 1) {
    cout << 0 << endl;
    return;
  }
  n--;
  ll wh = 0, d = 0;
  bool ct = 1;
  ll pw = 0;
  while (ct) {
    ll w2 = wh + 9 * pow(10, pw);
    if (w2 < n) {
      wh = w2;
      d++;
      pw = d / 2;
    } else {
      ct = 0;
    }
  }
  ll n2 = n - wh;
  ll nmsig = d / 2;
  vll nms;
  ll n3;
  if (nmsig) {
    n3 = pow(10, nmsig);
    // n3 = pow(10,nmsig)-1+n2 breaking this into three lines changed the answer
    // somehow
    // but is still the wrong answer i don't know where i've gone wrong
    n3 = n3 + n2;
    n3--;
  } else {
    n3 = n2;
  }
  string s1 = to_string(n3);
  string s2 = s1;
  reverse(s2.begin(), s2.end());
  if (!(d % 2))
    s1.pop_back();
  cout << s1 + s2 << endl;
  // ofstream MyFile("filename.txt", std::ios_base::app);
  // MyFile << s1 + s2 << endl;
  // MyFile.close();
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
