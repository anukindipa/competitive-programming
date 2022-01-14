#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;
	for(ll i =1;i<=n;i++){
		// formula derived through some math
		// non attacking = total ways - 4x number of 2x3 squares
		// t = k^2 choose 2 - 4 x k-1 x k-2
		// t = k^2 x 1/2 x k^2-1 - k-1xk-2
		ll c = i*i;
		ll n = c -1;
		c= c*n;
		c=c/2;
		ll m = i-1;
		ll nn = m-1;
		m = m*nn;
		m = m*4;
		cout<<c-m <<endl;
	}


	}
