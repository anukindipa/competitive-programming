#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n;
	cin>>n;
	long long sum =0;
	for(long long i=1;i<n;i++ ){
		long long k;
		cin>>k;
		sum += k;
	}
	long long roe  = n*(n+1);
	roe = roe/2;
	cout<<roe- sum;







	return 0;
}	
