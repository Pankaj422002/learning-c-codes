// array_rain-water-trapping.cpp
#include<iostream>
using namespace std;
int min(int a,int b){
	return (a<b)?a:b;
}
int max(int a,int b){
	return (a>b)?a:b;
}
// 1. first approach : time complexity = O(n^2)
/*
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[100000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int water = 0; 
	for(int i=1;i<(n-1);i++){
		int left=a[i],right=a[i];
		for(int j=0;j<i;j++){
			left=max(left,a[j]);
		}
		for(int j=i+1;j<n;j++){
			right=max(right,a[j]);
		}
		water+=min(left,right) - a[i];
	}
	cout<<water <<endl;
	return 0;
}
*/
// 2. second approach : time complexity = O(n)
int main(){
	int n;cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int left[10000];
	int right[10000];
	left[0]=a[0];
	right[n-1]=a[n-1];
	int water=0; 
	for(int i=1;i<n;i++){
		left[i]=max(left,a[i]);
	}
	for(int j=n-1;j>=0;j--){
		right[j]=max(right,a[j]);
	}
	for(int i=0;i<n;i++){
		water += min(left[i],right[i])-a[i];
	}
	cout<<water<<endl;
	
	return 0;
}