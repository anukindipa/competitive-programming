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
    vector<string> k = {"s"};
    t--;
    while(t>=4){
        k.push_back("ttss");
        t = t-4;
    }
    int mm= t%4;
    
    if(mm==1){k.push_back("t");}
    else if(mm==2){k.push_back("tt");}
    else if(mm==3){k.push_back("tts");}
    
    
    for(auto x:k){
        cout<<x;}
    
    
    
    return 0;
}
