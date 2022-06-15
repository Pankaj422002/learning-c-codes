// Recur_diving_quicksort_lect.cpp
#include<iostream>
using namespace std;
int partition(int *a,int s,int e){
	int i=s-1;
	for(int j=s;j<e;j++){
		if(a[j]<=a[e]){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quicksort(int *a,int s,int e){
	if(s>=e)
		return ;

	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);

}
int main(){
	int a[]={4,2,6,8,45,1,34,22};
	int n=sizeof(a)/sizeof(int);
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}