#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	int m=0;
	while(n--){
		int x;cin>>x;
		if(m<x){
			m=x;
		}
		else{
			break;
		}
	}
	cout<<m;
}
