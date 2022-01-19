// https://codeforces.com/contest/1216/problem/C
// Codeforces Round #587 (Div. 3) problem C

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll inte(int a,int b, int c, int d){
	return max(min(b,d)-max(a,c),0);
}

ll areaI(vector<ll> ar,vector<ll> arr){
	int a = ar[0];
	int b = ar[1];
	int c = ar[2];
	int d = ar[3];
	int e = arr[0];
	int f = arr[1];
	int g = arr[2];
	int h = arr[3];

	ll hmm = inte(a,c,e,g);
	ll hmmm = inte(b,d,f,h);

	return hmm*hmmm;

}

int main(){
	vector<vector<ll>> v;
	for(ll i=0;i<3;i++){
		vector<ll> vv;
		for(ll i=0;i<4;i++){
			ll x;cin>>x;
			vv.push_back(x);
		}
		v.push_back(vv);
	}

	// Area = Area(white) - Area(black1) - Area(black2) + Area(black1^black2)

	
	//for(ll ss: v[0]){cout<<ss<<" ";}

	ll aWhite = (v[0][2]-v[0][0])*(v[0][3]-v[0][1]);
	// white black1 black2 llersection
	// a,b,c,d
	// a..c..b..d
	// lle(max(a,c),min(b,d),whitex2,whitex1)
	//
	
	ll iix = inte(max(v[1][0],v[2][0]),min(v[1][2],v[2][2]),v[0][0],v[0][2]);
	ll iiy = inte(max(v[1][1],v[2][1]),min(v[1][3],v[2][3]),v[0][1],v[0][3]);
	ll www = iix*iiy;
	ll res = aWhite - areaI(v[0],v[1])-areaI(v[0],v[2])+www;

	if(res>0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}


}
