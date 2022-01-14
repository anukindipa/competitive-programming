#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	int arr[N];
	vector<int> v;

	for(int i=0;i<N;i++){
		int k;
		cin>>k;
		v.push_back(k);
	}

	arr[0] = 0;
	arr[1] = abs(v[0]-v[1]);


	for(int i=2;i<N;i++){
		arr[i] = min(arr[i-1]+abs(v[i-1]-v[i] ),arr[i-2]+abs(v[i-2]-v[i]));
	}
	cout<<arr[N-1];

	return 0;
}

