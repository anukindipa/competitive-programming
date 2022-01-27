#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;
	int sum =0;
	for(ll i=5;i<=n;i=i*5){
		sum += n/i;
	}
	cout<<sum;


	}
