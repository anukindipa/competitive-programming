#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
	vector<vector<int>> v;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			char h;
			cin>>h;
			if(h=='*'){
				vector<int> vv;
				vv.push_back(j);
				vv.push_back(i);
				v.push_back(vv);
			}
		}
	}
	/*	
	sort(v.begin(),v.end());	
	for(auto x:v){
		for(auto xx:x){
			cout<<xx<<" ";
		}
		cout<<endl;
	}
	*/






}
