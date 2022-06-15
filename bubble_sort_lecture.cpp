#include <iostream>
using namespace std;
<<<<<<< HEAD
void bubble_sort(int a[],int n){
	for(int i=1;i<=(n-1);i++){
		for(int j=0;j<=(n-1-i);j++){
=======
int bubble_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-1-i;j++){
>>>>>>> 46f9d76ee9b987ed84a7a3e79f4280b8958f68ad
			if(a[j]>a[j+1]){
				// swap(a[j],a[j+1]);
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
<<<<<<< HEAD
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[1000];
=======
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[n];
>>>>>>> 46f9d76ee9b987ed84a7a3e79f4280b8958f68ad
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<",";
	return 0;
}