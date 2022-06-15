// no_theory_GCD_LCM.cpp
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;

	return gcd(b,a%b);
}
int main(){
	freopen("input.txt","r",stdin);
	int a,b;cin>>a>>b;
	cout<<"hcf: "<<gcd(a,b)<<endl;
	cout<<"lcm: "<<((a*b)/gcd(a,b))<<endl;
	return 0;
}