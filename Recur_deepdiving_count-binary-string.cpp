// Recur_deepdiving_count-binary-string.cpp
#include<iostream>
using namespace std;
int count(int n,int ld){
	//base case 
	if(n==0)
		return 0;
	if(n==1){
		if(ld==0){
			return 2;
		}else{
			return 1;
		}
	}

	//recursive case : 
	if(ld==0){
		return count(n-1,0)+count(n-1,1);
	}else{
		return count(n-1,0);
	}
}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	cout<<count(n,0)<<endl;
	return 0;
}