#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;
	cin>>n;
	if(n%4==1 || n%4==2){
		cout<<"NO";
		return 0;
	}
	cout<<"YES"<<endl;
	if(n%4==0){
		int m = n/2;
		cout<<m<<endl;
		for(int i=1;i<m;i+=2){
			cout<<i<<" ";
			cout<<n-i+1<<" ";
		}
		cout<<endl<<m<<endl;
		for(int i=2;i<=m;i+=2){
			cout<<i<<" ";
			cout<<n-i+1<<" ";
		}

	}else{
		//7 = 1 2 4 7 , 3 5 6
		//11 =  1 2 4 7 8 11 , 3 5 6 (8+1 this nummber doesnt work on keyboard)   10 
		// 3 = 1 2 , 3 
		int m = (n+1)/2;
		cout<<m<<endl;

		cout<<1<<" "<<2<<" ";
		for(int i=4;i<=n;i+=4){
			cout<<i<<" ";
			cout<<i+3<<" ";
		}
		cout<<endl<<n/2<<endl;
		cout<<3<<" ";
		for(int i=5;i<=n;i+=4){
			cout<<i<<" "<<i+1<<" ";

	}

	}
	return 0;
}
