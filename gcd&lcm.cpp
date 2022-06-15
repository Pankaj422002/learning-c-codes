// gcd&lcm.cpp
#include <iostream>
using namespace std;
int gcdof(int a,int b){
	if(b==0){
		return a;
	}
	return gcdof(b,a%b);
}

int lcmof(int a,int b){
	return ((a*b)/gcdof(a,b));
}

int main(){
	freopen("myinput.txt","r",stdin);
	int a, b;cin>>a>>b;
	int gcd = gcdof(a,b); // gcd of no. 
	// int lcm = lcmof(a,b);  // lcm of no.s 
	cout<<"gcd of two no. is : "<< gcd;
	// cout<<"lcm of two no. is : "<< lcm;
	return 0;
}