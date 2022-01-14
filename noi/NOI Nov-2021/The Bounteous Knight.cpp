#include <cmath>
#include <cstdio>
#include <vector>
#include<map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin>>n;
    vector<int> v;
    
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    for(int i=0;i<n-1;i++){
        vector<int> vals;
        int heh = v[i];
        for(int j=i+1;j<n;j++){
            int hmm = heh + v[j];
            
            
            
                if(mp.count(hmm)==0){
                    mp[hmm]=1;
                    
                }else{
                    mp[hmm]=mp[hmm]+1;
                }
                
                vals.push_back(hmm); 
            
            
        }
        
        
        
        
    }
    int answer = 0;
        for (auto const& x : mp){
              if(x.second>answer){answer=x.second;}
        }
        cout<<answer;
        
        
    
    
    
    
    
    
    
    return 0;
}

