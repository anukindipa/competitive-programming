#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;
	vector<ll> v,b;
	for(ll i=0;i<n;i++){
		ll q,w;
		cin>>q>>w;
		v.push_back(q);
		b.push_back(w); 
	}

	for(ll i=0;i<n;i++){
		if(v[i]==b[i]){
			cout<<(v[i]*v[i])-v[i]+1<<endl;
		}
		else if(v[i]>b[i]){
			if(v[i]%2==0){
				cout<<(v[i]*v[i])-b[i]+1<<endl;
			}else{

				cout<<((v[i]-1)*(v[i]-1))+b[i]<<endl;
				}
		}else{

			if(b[i]%2==0){
				cout<<((b[i]-1)*(b[i]-1))+v[i]<<endl;
			}else{

				cout<<((b[i])*(b[i]))-v[i]+1<<endl;









		}
	}}
}
