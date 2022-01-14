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
    string k = "s";
    t--;
    while(t>=4){
        k=k+"ttss";
        t = t-4;
    }
    int mm= t%4;
    
    if(mm==0){}
    else if(mm==1){k = k+"t";}
    else if(mm==2){k = k+"tt";}
    else if(mm==3){k = k+"tts";}
    
    
    
    
    cout<<k;
    
    
    
    return 0;
}
