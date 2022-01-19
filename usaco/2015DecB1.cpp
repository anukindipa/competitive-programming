#include<bits/stdc++.h>

// http://www.usaco.org/index.php?page=viewproblem2&cpid=567#
//



using namespace std;

int main(){
	freopen("paint.in", "r", stdin);

	// the following line creates/overwrites the output file

	freopen("paint.out", "w", stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	/*
	 * better solution
	vector<int> v(100);

	for(int i=0;i<100;i++){
		v[i] = 0;
	}	
	for(int i=a;i<b;i++){
	       v[i]=true;
	}
	for(int i=c;i<d;i++){
	       v[i]=true;
	}

	int s =0;
	for(auto x:v){
		if(x){s++;}
	}

	cout<<s;
	*/

	cout<<b+d-c-a-(max(min(b,d)-max(a,c),0));


}
