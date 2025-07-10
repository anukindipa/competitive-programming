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
  string s;
  cin>>s;
  map<char, int> m;
  m[s[0]]++;
  m[s[n-1]]++;
  for(int i=1;i<n-1;i++){
    m[s[i]]++;
    if (m[s[i]]>1){
      cout<< "Yes\n";
      return;
    }
  }
  
  cout<<"No\n";
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
