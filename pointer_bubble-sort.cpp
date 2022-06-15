// pointer_bubble-sort.cpp
#include <iostream>
using namespace std;
void bubble_sort(int *p, int n){
	for(int i=0;i<(n-1);i++){
		for(int j=0;j<(n-1-i);j++){
			if(p[j]>p[j+1]){
				swap(p[j],p[j+1]);
			}
		}
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}