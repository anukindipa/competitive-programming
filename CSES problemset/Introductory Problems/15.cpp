#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
	string s;
	cin>>s;

	map<char, int> m;

	for(auto x:s){
		if(m.find(x)!=m.end()){
				m[x]++;
		}else{
			m[x] =1;
			}
		}
		
		int a = s.length();
		ll q = 1;
		for(int i=1;i<=a;i++){
			q =q*i;
		}





		for(auto it=m.begin();it!=m.end();it++){
			int qq=1;
			for(int i=1;i<=it->second;i++){
				qq=qq*i;
			}
			q = q/qq;
		}
		cout<<q<<endl;
		sort(s.begin(),s.end());

		do{
			cout<<s<<endl;
		}while(next_permutation(s.begin(),s.end()));




}
