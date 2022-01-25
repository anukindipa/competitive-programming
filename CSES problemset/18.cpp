#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll mm;
		cin>>mm;
		
		ll k=mm;

		ll h = 0;
		ll nono = (9)*(pow(10,h))*((h+1));
		while(k>(nono)){
				k = k - (9*pow(10,h)*(h+1));
				h++;
				nono = (9)*(pow(10,h))*((h+1));
		}
		
		ll m = (k-1)/(h+1);
		ll pp = (k-1)%(h+1);
		ll oo = pow(10,h) + m;
		string ss = to_string(oo);
		cout<<ss[pp]<<endl;
	}	

				
	
				

	
	}	

