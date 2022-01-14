#include<iostream>
#include<vector>

using namespace std;

int main(){

	int t;
	cin>>t;

	vector<int>a;
	vector<int> b;
	for(int i=0;i<t;i++){
		int aa,bb;
		cin>>aa>>bb;
		a.push_back(aa);
		b.push_back(bb);
	}
	
	for(int i=0;i<t;i++){
	
		int tt = a[i]+b[i];
		tt= tt/4;
		if(min(a[i],b[i])>tt-1){
			cout<<tt<<endl;}
		else{
			cout<<min(a[i],b[i])<<endl;
		}

	}
	return 0;
}
