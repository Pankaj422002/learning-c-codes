// array_inverse_of_array.cpp

#include<iostream>
using namespace std;
void inverse_array(int a[],int n){
	int b[1000];
	for(int i=0;i<n;i++){
		int temp=a[i];
		b[temp]=i;
	}
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
}
int main() {
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	inverse_array(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}