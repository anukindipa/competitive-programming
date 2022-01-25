#include<bits/stdc++.h>

using namespace std;

int main(){
	int INF = 2147483647;

	int n,k;
	cin>>n>>k;
	int arr[n];
	vector<int> v;


	for(int i=0;i<n;i++){
		arr[i] = INF;
		int x;
		cin>>x;
		v.push_back(x);
	}


	arr[0] =0;
	for(int i=0;i<n;i++){
		for(int j=1;j<k+1;j++){
			if(i+j<n){
				arr[i+j] = min(arr[i]+abs(v[i+j]-v[i]),arr[i+j]);
			}
	
		}
	}
	cout<<arr[n-1];
	



}

