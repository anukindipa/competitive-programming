#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
using namespace std;

int main(){
	// use recursion to genarate subsets and keep record of their sum
	// TODO Make More Efficent
	// Time limit exceeded for n>10
	// also interger overflow?	
	
	// I dont no how but some how stopped interger overflow now it works :)))))
	
	int n;
	cin>>n;

	vector<ll> v;
	vector<ll> sums;
	
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		v.push_back(x);
	}

	ll sum = 0;

	for(ll i=0;i<pow(2,n);i++){
		ll q = i;
		vector<int> s;
		vector<ll> subr;
		for(ll j=0;j<n;j++){
			s.push_back(q%2);
			q = q/2;
		}
		reverse(s.begin(),s.end());

		for(ll j=0;j<n;j++){
			if(s[j]==1){
				subr.push_back(v[j]);
			}
			else{
				subr.push_back(0);
			}
		}
		//cout<<accumulate(subr.begin(),subr.end(),0)<<endl;

		ll sum = 0;
		for(int i=0;i<n;i++){
			sum = sum - subr[i];
			sum = sum + v[i];
		}
		sums.push_back(sum);	
	}

	ll purrfect = sums[0];	
	
	//cout<<purrfect;
	 ll best =0;
	for(ll x:sums)
	{
		if(x<=purrfect/2 && purrfect-best>purrfect-x){
			best = x;
		}
		//cout<<x<<endl;
	}
	purrfect=purrfect-best;
	
	purrfect=purrfect-best;
	cout<<purrfect;






}
