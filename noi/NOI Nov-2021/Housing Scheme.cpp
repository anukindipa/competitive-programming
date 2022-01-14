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
    vector<int> tst;
    
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        tst.push_back(k);
    }
    
    
    for(auto x: tst){
        if(x<4){cout<<-1;}
        else if(x<6){if(x==4){
            cout<<3<<' '<<1<<' '<<4<<' '<<2; 
        }
                     if(x==5){
            cout<<5<<' '<< 3 <<' '<<1<<' '<<4<<' '<<2; 
        }
                    }
        else{
            int fst,lst=0;
            if(x%2==0){fst=x-1;lst=x;}else{fst=x;lst=x-1;}
            while(fst>2){
                cout<<fst<<' ';
                fst = fst-2;
            }
            cout<<fst<<' ';
            fst=fst+5;
            cout<<4<<' '<<2<<' '<<fst<<' ';
            while(fst<lst-1){
                fst+=2;
                cout<<fst<<' ';
            }
            
            
            
            
        } cout<<endl;  
    }   
    return 0;
}

