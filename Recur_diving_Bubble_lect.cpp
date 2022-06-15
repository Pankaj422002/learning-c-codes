// Recur_diving_Bubble_lect.cpp
// 1. using loop
// 2. without using loop
#include<iostream>
using namespace std;
/*
void bubble_sort_1(int *a, int n,int i){
	if(i==(n-1))
		return ;
	for(int j=0;j<(n-1-i);j++){
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
	}

	return bubble_sort_1(a,n,i+1);
}
*/
void bubble_sort_2(int *a,int n,int i,int j){
	if(i==(n-1))
		return;
	if(j==(n-1-i))
		return bubble_sort_2(a,n,i+1,0);
	if(j<(n-1-i)){
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		return bubble_sort_2(a,n,i,j+1);
	}
	
}
int main(){
	int a[]={41,13,21,111,0};
	int n=sizeof(a)/sizeof(int);
	// bubble_sort_1(a,n,0);
	bubble_sort_2(a,n,0,0);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}