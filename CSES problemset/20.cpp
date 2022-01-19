#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> v;
	while(n--){
		int x;
		cin>>x;
		v.insert(x);
	}
	cout<<v.size();
}
