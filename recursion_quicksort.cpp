// recursion_quicksort.cpp
#include<iostream>
using namespace std;
void quicksort(int a[],int s,int e){
	//base case : 
	if(s>=e)
		return;

	//our worK: 
	int pivot = a[e];
	int pi=s;
	for(int i=s;i<e;i++){
		if(a[i]<pivot){
			swap(a[i],a[pi]);
			pi++;
		}
	}
	swap(a[pi],a[e]);

	//recursive case: 
	quicksort(a,s,pi-1);

	quicksort(a,pi+1,e);

}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}