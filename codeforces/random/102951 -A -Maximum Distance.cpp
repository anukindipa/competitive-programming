#include<bits/stdc++.h>

// https://codeforces.com/gym/102951/problem/A
#define ll long long
using namespace std;

int main(){
	int n;
	cin>>n;
	long long ans=0;

	vector<int> x,y;

	for(int i=0;i<n;i++){
		int q;cin>>q;
		x.push_back(q);
	}
	
	for(int i=0;i<n;i++){
		int q;cin>>q;
		y.push_back(q);
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll hh = (y[i]-y[j])*(y[i]-y[j]);
			hh += (x[i]-x[j])*(x[i]-x[j]);
			if(hh>ans){ans=hh;}



		}
	
	}
	cout<<ans;


}
