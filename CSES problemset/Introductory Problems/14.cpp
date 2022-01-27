#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

vector<char> mmm(char s, char m, char t, int n){
	if(n==1){
		return {s,t};
	}

	else{
		vector<char> v = mmm(s,t,m,n-1);
	       	v.push_back(s);
		v.push_back(t);
		vector<char> vv = mmm(m,s,t,n-1);
		v.insert(v.end(),vv.begin(),vv.end());
		return v;
	}
}


int main(){

	int n;
	cin>>n;

	vector<char> v = mmm('1','2','3',n);			
	cout<<v.size()/2<<endl;
	for(int i=0;i<v.size();i+=2){
		cout<<v[i]<<" "<<v[i+1]<<endl;
	}








}
