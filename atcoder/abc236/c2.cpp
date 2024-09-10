#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	vector<string> q,w;

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
	set<string> amo(w.begin(),w.end());

	for(int i=0;i<n;i++){
		if(amo.count(q[i])==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}


}
