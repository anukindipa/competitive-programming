#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    string k = "";
    for(int i=0;i<t;i++){
        if(i%3==0){
            k = k+"s";
        }else{
            k=k+"t";
        }
        
    }
    cout<<k;
    
    
    
    return 0;
}
