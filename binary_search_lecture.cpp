// binary_search_lecture.cpp
#include <iostream>
using namespace std;
int binary_search(int a[],int n,int key){
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]<key)
			s=mid+1;
		else if(a[mid]>key)
			e=mid-1;
		else if(a[mid]==key){
			return mid;
		}

	}

	return -1;
}
int main()
{
	int n; cout<<"enter the no of elements: \n";
	cin>>n;
	int a[n]; cout<<"enter the array: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;
	cout<<"enter the key\n";
	cin>>key;
	int position = binary_search(a,n,key);
	cout<<"element found at "<<position<<" index"<<"\n";
	return 0;
}