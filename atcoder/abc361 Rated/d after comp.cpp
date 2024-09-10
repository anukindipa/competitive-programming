#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pb push_back

const ll INF = 1e9;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  string sss, ttt;
  cin >> n >> sss >> ttt;

  long long s = 0;
  long long t = 0;

  for (int i = 0; i < n; i++) {
    if (sss[i] == 'B') {
      s = s * 10 + 1;
    } else {
      s = s * 10 + 2;
    }
    if (ttt[i] == 'B') {
      t = t * 10 + 1;
    } else {
      t = t * 10 + 2;
    }
  }
  s *= 100;
  t *= 100;

  queue<long long> q;
  unordered_set<long long> visited;
  map<long long, long long> mp;
  mp[s] = 0;
  q.push(s);
  visited.insert(s);
  long long ans = INF;

  while (!q.empty()) {
    long long cur = q.front();
    q.pop();
    // for the current string find all strings that can be made by swapping pair
    // with empty space
    if (cur == t) {
      ans = min(ans, (long long)mp[cur]);
    }
    set<long long> pos;
    int pos_of_zero = n;
    long long cc = cur;
    while (cc % 10) {
      cc = cc / 10;
      pos_of_zero--;
    }
    for (int i = 0; i < n + 1; i++) {
      if (!(i == pos_of_zero || i == (pos_of_zero - 1) ||
            i == (pos_of_zero + 1))) {
        long long tochange;
        tochange = cur / (pow(10, n - i));
        long long newn = tochange / 100;
        newn = newn * pow(10, n - i + 2);
        newn += cur % ((long long)pow(10, n - i));
        tochange = tochange % 100;
        newn = newn + ((long long)tochange * pow(10, n - pos_of_zero));
        // newn represents all the strings that can be achived by swapping a
        // pair of characters
        pos.insert(newn);
      }
    }
    for (auto x : pos) {
      if (visited.find(x) == visited.end()) {
        visited.insert(x);
        mp[x] = mp[cur] + 1;
        q.push(x);
      }
    }
  }
  ans = (ans == INF) ? -1 : ans;
  cout << ans << endl;
}