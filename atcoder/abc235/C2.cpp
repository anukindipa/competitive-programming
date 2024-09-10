    #include<bits/stdc++.h>
     
    using namespace std;
     
    // same as c.cpp but needs to be more efficent as i had TL exceeded on one test
    // to do use vectors/arrays instead of map
     
     
    int main(){
    	ios_base::sync_with_stdio(false);
        	cin.tie(NULL);
    	int n;cin>>n;
    	int q;cin>>q;
     
    	vector<int> v,vq,vqq;
    	bool arr[n];
    	memset(arr,0,n);
     
    	vector<int> ar[n];
    	memset(ar,{},n);
    	
     
    	for(int i=0;i<n;i++){	
    		int x;
    		cin>>x;
    		v.push_back(x);
     
    		if(arr[x-1]){
    			ar[x-1].push_back(i+1);
    		}
    		else{
    			arr[x-1]=1;
    			vector<int> vvvv;
    			vvvv.push_back(i+1);
    			ar[x-1] = vvvv;
    		}
    	}
     
    /*
     
    	for(int i=0;i<n;i++){
    		cout<<i<<" ";
    		if(arr[i]){
    			for(auto qq:ar[i]){cout<<qq<<" ";}
    		}else{cout<<"empty";}
    		cout<<endl;
    	}
    */
     
    	for(int i=0;i<q;i++){
    		int x,y;
    		cin>>x>>y;
    		vq.push_back(x);
    		vqq.push_back(y);
    	}
     
    	for(int i=0;i<q;i++){
    		int nm = vq[i];
    		int occ = vqq[i];
     
    		if(arr[nm-1]){
    			if(occ>ar[nm-1].size()){
    				cout<<-1<<endl;
    			}
    			else{
    				cout<<ar[nm-1][occ-1]<<endl;
    			}
     
    		}
    		else{
    			cout<<-1<<endl;
     
    		}
    	}
    	
    	return 0;
    }
