#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	if(n==1){
		cout<<"1";
	}
	else if(n==3 || n==2){
		cout<<"NO SOLUTION";
	}
	else if(n==4){cout<<"2 4 1 3";}

	else{
		if(n%2==0){
			for(int i=n;i>0;i=i-2){
				cout<<i<<" ";
			}
			for(int i=n-1;i>0;i=i-2){
				cout<<i<<" ";
			}
		}else{
			for(int i=n-1;i>0;i=i-2){
				cout<<i<<" ";
			}
			for(int i=n;i>0;i=i-2){
				cout<<i<<" ";
			}

			


		}
	

	}
	return 0;
}
