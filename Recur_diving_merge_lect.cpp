// Recur_diving_merge_lect.cpp
#include <iostream>
using namespace std;
void merge(int *a,int s,int mid,int e){
	int i=s,j=mid+1,k=0;
	int temp[1000];
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k]=a[i];
			k++;i++;
		}
		else if(a[i]>=a[j]){
			temp[k]=a[j];
			k++,j++;
		}
	}

	while(i<=mid){
		temp[k]=a[i];
		k++;i++;
	}
	while(j<=e){
		temp[k]=a[j];
		k++;j++;
	}

	//copy the temp to a[];
	for(int i=s,l=0;i<=e;i++){
		a[i]=temp[l];
		l++;
	}

}
void mergesort(int *a,int s,int e){
	int mid=(s+e)/2;

	if(s>=e)
		return;

	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,mid,e);

}
int main(){
	int a[]={13,55,10,23,3,12,0};
	int n=sizeof(a)/sizeof(int);
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}