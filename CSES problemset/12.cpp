#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	string n;
	cin>>n;
	map<char, int> m;
	//my idea -> each char ocuurance in arr/vec or ma
	// if char_with_odd_num_of_occ > 1 -> imosible
	// else remove odd_occ_char and ut it in var
	// for each occ in ma occ /=2 
	// string += occ*char
	// cout string + middlechar + string.reverse;
	//
	// looks straightforward but idk how to use ma
	for(auto c:n){
		
	if(m.count(c)){
		m[c]++;
	}
	else{
		m.insert({c,1});
	}


	}

	int odd_el = 0;
	for(auto i=m.begin();i != m.end() ;i++ ){
		if(i->second%2){
			odd_el++;
		}
	}

	if(odd_el>1){
		cout<<"NO SOLUTION";}
	else{
		string xx = "";
		string xy = "";
		for(auto i=m.begin();i != m.end() ;i++ ){
			if(i->second%2){
				xx +=i->first;
				for(int j=0;j<i->second/2;j++){
					xy += i->first;
			}

			}
			else{
				for(int j=0;j<i->second/2;j++){
					xy += i->first;
			}
		}		 
	}
		string rz = xy;
		reverse(rz.begin(),rz.end()  ); 
		cout<<xy<<xx<<rz;
}}
