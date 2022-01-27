#include<bits/stdc++.h>
 
 
using namespace std;
 
int main() {
	long n,ans =0;
	cin>>n;
	vector<long long> v;
	for(long long i=0;i<n;i++){
		long long k;
		cin>>k;
		v.push_back(k);
	}
	for(long i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
			ans = ans + v[i] - v[i+1];
			v[i+1] = v[i];
 
	}}
	cout<<ans;
 
}	
