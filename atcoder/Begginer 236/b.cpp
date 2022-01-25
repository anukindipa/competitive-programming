#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int n;
	cin>>n;
	
	ll sum =0;
	
	for(ll i=1;i<n+1;i++){
		sum += 4*i;

	}
	
	ll fsum = 0;
	for(ll i=1;i<4*n;i++){
		int x;
		cin>>x;
		fsum += x;
	}
	cout<<sum - fsum;



}
