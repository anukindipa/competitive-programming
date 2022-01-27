#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;

	for(ll i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		if(a<b){swap(a,b);}

		if(a>2*b){cout<<"NO"<<endl;}
		else{

			a = a%3;
			b = b%3;
			if(a==0&&b==0){cout<<"YES"<<endl;}
			else if(a==1&&b==2){cout<<"YES"<<endl;}
			else if(a==2&&b==1){cout<<"YES"<<endl;}
			else{cout<<"NO"<<endl;}




		}
	}	
}
