#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int t;
	cin<<t;
	vector<vector<int>> v;
	for(int i=0;i<t;i++){
		int c;
		cin>>c;
		vector<int> vv;
		for(int j=0;j<c;j++){
				int cc;
				cin>>cc;
				vv.push_back(cc);
			}
		v.push_back(vv);
	}


	for(auto arr:v){
		vector<int> a;
		if(arr.front()>arr.back()){a.push_back(arr.front);arr.erase(arr.begin());}
		else{a.push_back(a.back());a.pop_back();}

		while(arr.size()>-1){
		




		}

		for(auto q:a){
			cout<<q<<' ';
	}
	cout<<endl;


	return 0;
}
