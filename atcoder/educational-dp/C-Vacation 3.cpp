#include<bits/stdc++.h>

using namespace std;

int main(){
	int INF = 2147483647;
	
	int n;cin>>n;
	int v[n][3];
	int arr[n][3];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>v[i][j];
			arr[i][j] = v[i][j];
		}
	}
/*
	for(int i=n-1;i>-1;i--){
		if(i==n-1){
			arr[i][0] = v[i][0];
			arr[i][1] = v[i][1];
			arr[i][2] = v[i][2];
		}
		
		if(i-1>-1){
			arr[i-1][0] = arr[i-1][0] + max(v[i-1][1],v[i][2]);
			arr[i-1][1] = arr[i-1][1] + max(v[i-1][0],v[i][2]);
			arr[i-1][2] = arr[i-1][2] + max(v[i-1][0],v[i][2]);
		}
	}	

	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}	
	
*/	
	
	
	/*	
	for(auto x:v){
		for(auto q:x){
			cout<<q<<" ";
		}
		cout<<endl;
	}
	*/


	for(int i=0;i<n-1;i++){
		arr[i+1][0] += max(arr[i][1],arr[i][2]);
		arr[i+1][1] += max(arr[i][0],arr[i][2]);
		arr[i+1][2] += max(arr[i][1],arr[i][0]);
	
	}

/*

	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


*/
int nn = max(arr[n-1][0], arr[n-1][1]);
nn = max(nn, arr[n-1][2]);
cout<<nn;



}

