#include<bits/stdc++.h>
#define INF (unsigned)!((int)0)

using namespace std;

int main(){
	int N,K;
	cin>>N>>K;
	int arr[N];
	vector<int> v;

	for(int i=0;i<N;i++){
		int k;
		cin>>k;
		v.push_back(k);
	}

	//arr[0] = 0;
	//arr[1] = abs(v[0]-v[1]);


	for(int i=0;i<N;i++){
		int best=INF;
		for(int j=0;i<K;i++){	
			if( j>=i ){
			best = min(best,arr[i-j]+abs(v[i-j]-v[i]));
		}}
	
	arr[i] = best;
	arr[0]=0;
	}
	cout<<arr[N-1];

	return 0;
}

