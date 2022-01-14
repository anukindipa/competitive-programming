#include<bits/stdc++.h>


using namespace std;

int main(){
	string s;
	cin>>s;
	char c='A';
	int maxi=0,cc=0;
	for(char x:s){
		if(c==x){
			cc++;
			maxi = max(maxi,cc); 
		}
		else{
			cc=1;
			c = x;
		}
	}
	cout<<maxi;
}
