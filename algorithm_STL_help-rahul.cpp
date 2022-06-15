// algorithm_STL_help-rahul.cpp
//"searching quickly in rotated string"
#include<iostream>
#include<algorithm>
#define int long long int
using namespace std;
int search(int a[],int l,int h,int key){
	if(l>h)
		return -1;

	int mid=(l+h)/2;

	if(a[mid]==key)
		return mid;

	//if l to mid is sorted
	if(a[l]<=a[mid]){
		if(key>=a[l]&&key<=a[mid]){
			return search(a,l,mid-1,key);
		}

		return search(a,mid+1,h,key);
	}
	if(key>=a[mid] && key<=a[h]){
		return search(a,mid+1,h,key);
	}

	return search(a,l,mid-1,key);

}
int32_t main() {
	int n;cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;cin>>key;
	int index=search(a,0,n-1,key);
	cout<<index<<endl;
	return 0;
}