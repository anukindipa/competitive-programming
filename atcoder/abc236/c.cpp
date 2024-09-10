#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<string> q(n),w(m);

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		q.push_back(s);
	}
	for(int i=0;i<m;i++){
		string s;
		cin>>s;
		w.push_back(s);
	}
	set<string> ss(w.begin(),w.end());

//	for(auto sss:ss){cout<<sss<<endl;}

	for(string ww:q){
		if(ss.count(ww)){
			cout<<ww<<"Yes"<<endl;
	}
		else{
			cout<<ww<<"No"<<endl;
		}
	}


}
