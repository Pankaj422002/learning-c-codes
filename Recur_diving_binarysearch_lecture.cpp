// Recur_diving_binarysearch_lecture.cpp
#include<iostream>
using namespace std;
int binary_search(int *a,int s,int e,int key){
	if(s>e)
		return -1;

	int mid = (s+e)/2; 

	if(a[mid]==key)
		return mid;

	if(a[mid]<key)
		return binary_search(a,mid+1,e,key);
	
	if(a[mid]>key)
		return binary_search(a,s,mid-1,key);

}
int main(){
	int a[]={1,12,14,55,67,88,99,123};
	int n = sizeof(a)/sizeof(int);
	int key=99;
	int index=binary_search(a,0,n-1,key);
	cout<<index<<endl;

	return 0;
}