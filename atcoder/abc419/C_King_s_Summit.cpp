#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pll pair<ll, ll>

#define fs(i, s, e) for (long long int i = s; i < e; i++)
#define f(i, e) for (long long int i = 0; i < e; i++)

#define pb push_back

#define gll(a) \
  ll a;        \
  cin >> a

const ll INF = 1e9;

/* ll dist(pll x, pll y){
    ll xdf = abs(x.first - y.first);
    ll ydf = abs(x.second - y.second);
    return max(xdf, ydf);
}

pll mdp(pll x, pll y){
    return {(x.first+y.first)/2 ,(x.second+y.second)/2};
}

ll gdist(pll dest, pll bx, pll sx, pll by,pll sy){
    dest.first= max(dest.first, (ll)0);
    dest.second= max(dest.second, (ll)0);
    ll ans = dist(dest, bx);
    ans = max(ans, dist(dest, sx));
    ans = max(ans, dist(dest, by));
    ans = max(ans, dist(dest, sy));
    return ans;
}
*/
void solve() {
    gll(n);
    vll xs(n), ys(n);
    f(i,n)cin>>xs[i]>>ys[i];
    /* pll qqqq= {xs[0], ys[0]};
    pll bx=qqqq;
    pll by= qqqq;
    pll sx = qqqq;
    pll sy = qqqq;
    */

    ll xmn = INF;
    ll ymn = INF;
    ll xmx = -1;
    ll ymx = -1;
    f(i,n){
        // pair<ll,ll> p = {xs[i], ys[i]};
        /* if(bx.first<p.first)bx = p;
        if(by.second<p.second)by = p;
        if(sx.first>p.first)sx = p;
        if(sy.second>p.second)sy = p; */

        if(xs[i]>xmx)xmx=xs[i];
        if(xs[i]<xmn)xmn=xs[i];
        if(ys[i]>ymx)ymx=ys[i];
        if(ys[i]<ymn)ymn=ys[i];

    }
    //cout<<bx.first<<" "<<bx.second<<" ";
    // cout<<sx.first<<" "<<sx.second<<" ";
    // pll midx = mdp(bx , sx);
    // pll midy = mdp(by , sy);
    //cout<<midx.first<<" "<<midx.second<<" ";
    //cout<<midy.first<<" "<<midy.second<<" ";
    

    ll ans = INF;
    ll xdf = xmx - xmn;
    ll ydf = ymx - ymn;
    ll tx = (xdf+1)/2;
    ll ty = (ydf+1)/2;
    ll aaa=max(tx,ty);
    ans = min(ans, aaa);
    cout<<ans<<endl;
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
