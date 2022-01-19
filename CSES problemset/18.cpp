#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){

	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		
		int m =1;
		int j =9;
		while(k>j){
			k = k-j;
			j = j * 10 * m;
			cout<<j<<endl;
			m++;
		}
		cout<<k;	
		
		
		
		
		/*	

		int nn = k/m;
		if(k%m ==0){
			nn-1;
			cout<<nn%10<<endl;
		}
		else{
			string s = to_string(nn);
			cout<<s[k%m - 1]<<endl;
		}
		*/



	}

}
