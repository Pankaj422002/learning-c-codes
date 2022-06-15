// Recur_deepdiving_staircase_lect.cpp
#include<iostream>
using namespace std;
int steps(int n){
	if(n==0)
		return 1;
	if(n<0)
		return 0;

	return steps(n-1)+steps(n-2)+steps(n-3);
}
int Nsteps(int n,int k){
	if(n==0)
		return 1;
	if(n<0)
		return 0;

	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=Nsteps(n-i,k);	
	}
	return ans;

}
int main(){
	int n=3;
	int k=3;
	cout<<steps(n)<<endl;
	cout<<Nsteps(n,k)<<endl;
	return 0;
}