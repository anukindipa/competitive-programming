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
    gll(n);gll(m);
    string s,t;
    cin>>s>>t;
    vll arr(n+1);
    f(i,m){
        gll(l);gll(r);
        arr[l-1]++;
        arr[r]--;
    }
    fs(i,1,n){
        arr[i]+=arr[i-1];
    }
    f(i,n){
        s[i] = arr[i]%2 ? t[i] : s[i];
    }
    cout<<s<<endl;
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
