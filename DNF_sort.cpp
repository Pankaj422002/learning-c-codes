// DNF_sort.cpp
#include<iostream>
using namespace std;
void dnf_sort(int a[],int n){
	int i=0,j=0,k=(n-1);
	while(j<=k){
		//for 0's : 
		if(a[j]==0){
			swap(a[j],a[i]);
			j++;i++;
		}

		//for 1's : 
		if(a[j]==1){
			j++; 
		}

		//for 2's : 
		if(a[j]==2){
			swap(a[j],a[k]);
			k--; 
		}
	}
}
int main()
{
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	dnf_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}