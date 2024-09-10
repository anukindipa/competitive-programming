#include<bits/stdc++.h>

using namespace std;

int main(){
	int m;
	cin>>m;

	int a = m/100;
	int b = (m%100)/10;
	int c = m%10;
	cout<<(a+b+c)*111;
}
