// Recur-Basic_isarraysorted.cpp
#include<iostream>
using namespace std;
bool Is_arraySorted_1(int *a,int n){
	if(n==0||n==1){
		return true; 
	}
	bool smaller_sorted = Is_arraySorted_1(a+1,n-1);
	if(smaller_sorted==true && a[0]<=a[1]){
		return true;
	}else{
		return false;
	}
}

bool Is_arraySorted_2(int *a,int n,int i){
	if(i==(n-1))
		return true;
	if(Is_arraySorted_2(a,n,i+1) && a[i]<=a[i+1]){
		return true;
	}else{
		return false;
	}

}
int main(){
	int a[]={0,3,15,19,20};
	int n = sizeof(a)/sizeof(int);
	cout<<Is_arraySorted_1(a,n)<<endl;
	cout<<Is_arraySorted_2(a,n,0)<<endl;
	return 0;
}