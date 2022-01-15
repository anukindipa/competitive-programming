#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){

	int n;
	cin>>n;

	vi v = {1,0};
	for(int k=1;k<n;k++){
		vi vv = v;
		reverse(vv.begin(),vv.end());
		for(int i=0;i<vv.size();i++){
			vv[i] += pow(2,k);
		}
		vi vvv;
		vvv = v;
		vvv.insert(vvv.end(),vv.begin(),vv.end());
		v = vvv;
		
	}
	/*
	for(auto xx:v){
	cout<<xx<<endl;
	}	
	*/
	//now to turn them into bit string of length n
	

	for(auto k:v){
	
		string s="";
	for(int j=0;j<n;j++){
		if(k%2==1){
			s='1'+s;
		}
		else{
			s = '0'+s;
		}	
		k=k/2;
	}

	cout<<s<<endl;

	

	}





}
