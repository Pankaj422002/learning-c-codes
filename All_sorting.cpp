// All_sorting.cpp
#include <iostream>
#include <algorithm>
using namespace std;
void selectionsort(int[], int);
void bubblesort(int[], int);
void insertion_sort(int[], int);
/* bool compare(int a, int b){
	return a>b;
} */
 
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// selectionsort(a,n);
	// bubblesort(a,n);
	// insertion_sort(a,n);

	sort(a, a + n); // inbuilt sort

	// sort(a, a + n, compare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}

	return 0;
}
void selectionsort(int a[], int n){

	for(int i=0;i<(n-1);i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}
void bubblesort(int a[], int n){
	for(int i=0;i<(n-1);i++){
		for(int j=0;j<(n-1-i);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
void insertion_sort(int a[], int n){
	for(int i=1;i<n;i++){
		int e=a[i];
		int j;
		for(j=i-1;e<a[j] && j>=0;j--){
				a[j+1]=a[j];
		}
		a[j+1]=e;
	}
}