#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,y;
    cin>>x>>y;
    vector<int> pl,ct;
    for(int i=0;i<x;i++){
        int t;
        cin>>t;
        pl.push_back(t);
        
    }
    
     for(int i=0;i<y;i++){
        int t;
        cin>>t;
        ct.push_back(t);
        
    }
    
    int odd_pl, even_pl, odd_ct, even_ct =0;
    
    for(auto j:pl){
        if(j%2==0){even_pl++;}
    }
    odd_pl=pl.size()-even_pl;
    
    for(auto j:ct){
        if(j%2==0){even_ct++;}
    }
    odd_ct=ct.size()-even_ct;
    
    
    cout<<min(odd_ct,even_pl)+min(odd_pl,even_ct)<<endl;
    
    
    
    return 0;
}

