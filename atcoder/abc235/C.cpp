#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n;cin>>n;
	int q;cin>>q;

	vector<int> v,vq;
	map<int,vector<int>> m;

	for(int i=0;i<n;i++){	
		int x;
		cin>>x;
		v.push_back(x);
	}

	for(int i=0;i<n;i++){	
		auto itr = m.find(v[i]);
		if(itr==m.end()){
			vector<int> hmm;
			hmm.push_back(i+1);
			m.insert({v[i],hmm});
		}
		else{
			itr->second.push_back(i+1);
		}
	}
/*
	for(auto xx=m.begin();xx!=m.end();xx++){
		cout<<xx->first<<": ";
		for(auto qq: xx->second){
			cout<<qq<<" ";
		}
		cout<<endl;
	}
*/
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		vq.push_back(x);
		vq.push_back(y);
	}

	for(int i=0;i<q;i++){
		int qq = vq[2*i];
		int vv = vq[2*i + 1];

		auto itr = m.find(qq);
		if(itr==m.end()){cout<<-1<<endl;}
		else{
		vector<int> hh = itr->second;
		
		if(vv>hh.size()){
			cout<<-1<<endl;
		}
		else{
			cout<<hh[vv-1]<<endl;
		}
		}


	}
	return 0;
}
