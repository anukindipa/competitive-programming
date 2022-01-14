#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;


bool check_i(int k){
	while(k){
		int j = k%10;
		if(j%2==0){
			return 1;
		}
		k = k -j;
		k = k/10;
	}
	return 0;
}
int fd(int j){
	j = abs(j);
	while(j>9){
		j = j/10;
	}
	return j;}




int main(){

	int t;
	vector<int> v;

	cin>>t;

	for(int i=0;i<t;i++){
		int nn;
		cin>>nn;
		v.push_back(nn);
	}

	for(auto x: v){
		if(x%2==0){
			cout<<0<<endl;
		}
		else{
		if(!check_i(x)){cout<<-1<<endl;}
		else{
			if(fd(x)%2==0){
				cout<<1<<endl;
			
			}else{
			cout<<2<<endl;
			}
		}	
		}
	}



	return 0;
}
