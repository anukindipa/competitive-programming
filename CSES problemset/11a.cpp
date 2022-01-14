#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;

	for(ll i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		while( a>0 && b>0){
			if(a>b){a=a-2;b--;}
			else{b=b-2;a--;}
		}
		if(a==0 && b==0){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}
		//if(s%3){
		//	cout<<"NO"<<endl;
		//}else if(ss*3<g){ cout<<"NO"<<endl;
		//}else{cout<<"YES"<<endl;}}

}	}
