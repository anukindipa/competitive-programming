#include<bits/stdc++.h>

// http://www.usaco.org/index.php?page=viewproblem2&cpid=759



using namespace std;

int inte(int a,int b, int c, int d){
	return max(min(b,d)-max(a,c),0);
}

int main(){
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	
	int ax1,ay1,ax2,ay2;
	// First billboard ^ second billboard 
	int bx1,by1,bx2,by2;
	int tx1,ty1,tx2,ty2;
	cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2>>tx1>>ty1>>tx2>>ty2;

	// formula for area of intersrction between ab,cd in a....b.....c....d...
	// a<b,c<d
	// cout<<b+d-c-a-(max(min(b,d)-max(a,c),0));

	int Aa = (ax2-ax1)*(ay2-ay1);
	int Ba = (bx2-bx1)*(by2-by1);
	int secAT = inte(ax1,ax2,tx1,tx2)*inte(ay1,ay2,ty1,ty2);
	int secBT = inte(bx1,bx2,tx1,tx2)*inte(by1,by2,ty1,ty2);

	cout<<Aa+Ba-secAT-secBT;

}
