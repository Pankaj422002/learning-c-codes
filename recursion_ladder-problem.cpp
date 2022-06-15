// recursion_ladder-problem.cpp
#include<iostream>
using namespace std;
int f(int n,int k){
	//base case :
	if(n==0)
		return 1;

	if(n<0)
		return 0;

	//recursive case: 
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=f(n-i,k);			// f(n-1)+ f(n-2)+ f(n-2) + ......+f(n-k);
	}

	return ans;
}
int main(){
	freopen("input.txt","r",stdin);
	int n,k;cin>>n>>k;	//n=3 and k=3 output : 7;

	cout<<f(n,k)<<endl;
	return 0;
}