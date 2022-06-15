// recursion_inversion_count.cpp
#include<iostream>
using namespace std;
int cross_inversion(int a[],int s,int e){
	int mid=(s+e)/2;
	int cnt=0;int temp[10000]; int k=0; 
	int i=s;
	int j=mid+1;
	while(i<=mid and j<=e){
		if(a[i]<a[j]){
			temp[k]=a[i];
			k++;i++;
		}
		if(a[i]>a[j]){
			cnt+=(mid-i+1);
			temp[k]=a[j];
			k++;j++;
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

	for(int i=s,l=0;i<=e;i++){
		a[i]=temp[l];
		l++; 
	}
	return cnt;
}
int inversion_count(int a[],int s,int e){
	if(s>=e)
		return 0;

	int mid = (s+e)/2;
	int x=inversion_count(a,s,mid);
	int y= inversion_count(a,mid+1,e);
	int z=cross_inversion(a,s,e);
	return x+y+z;

}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<inversion_count(a,0,n-1)<<endl;
	return 0;
}