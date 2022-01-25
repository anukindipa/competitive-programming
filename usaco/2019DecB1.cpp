#include<bits/stdc++.h>

// http://www.usaco.org/index.php?page=viewproblem2&cpid=567#
//



using namespace std;

int main(){
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);

	int m,n;
	cin>>m>>n;

	vector<vector<int>> v;
	int ans = 0;


	for(int i=0;i<m;i++){
		vector<int> vv;
		for(int j=0;j<n;j++){
			int wq;
			cin>>wq;
			vv.push_back(wq);
		}
		v.push_back(vv);
	}







	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int con = 0;
			int non = 0;

			for(int k=0;k<m;k++){
				
				auto find1 = find(v[k].begin(),v[k].end(),i);
				int find1v = v[k].begin()-find1;

				auto find2 = find(v[k].begin(),v[k].end(),j);
				int find2v = v[k].begin()-find2;

				if(find1v>find2v){
					if(k==0){
						con = 0;
						non = 0;
					}
					else{
						non = 0;
					}
				}else{
					if(k==0){
						con = 1;
						non = 1;
					}
					else{
						non = 1;
					}
				}
			
			
				if(con==non){
					ans++;
				}
			
			}




		}




	}
	cout<<ans;


}
