#include <iostream>
using namespace std;
int selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j])
				min=j;
		}
		swap(a[i],a[min]);
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selection_sort(a,n);
	cout<<"sorted array : \n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	return 0;
}