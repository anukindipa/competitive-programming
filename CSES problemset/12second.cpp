#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	map<char,int> m;
	for(auto x:s){
		auto it = m.find(x);
		if(it == m.end()){
			m[x]=1;	
		}
		else{
			m[x]=m[x]+1;
		}
	}
	int odd =0;
	string hmm = "";
 
	for(auto j=m.begin();j!=m.end();j++){
		if(j->second%2==1){
			odd++;
			j->second = j->second-1;
			hmm += j->first;
		}}
	if(odd>1){
		cout<<"NO SOLUTION";
	}
	else{
		string q = "";
		for(auto j=m.begin();j!=m.end();j++){
			for(int i=0;i<j->second/2;i++){
				q += j->first;
			}
		}
		string qq = q;
		reverse(q.begin(),q.end());
		cout<<q<<hmm<<qq;
	}
 
 
 
 
 
 
}
