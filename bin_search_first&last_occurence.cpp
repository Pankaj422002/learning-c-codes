// bin_search_first&last_occurence.cpp
#include<iostream>
using namespace std;
int first_occurence(int a[],int n,int key){
	int s=0,e=(n-1);
	int ans=(-1);
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			ans=mid;
			e=mid-1;
		}else if(a[mid]<key){
			s=mid+1;
		}else if(a[mid]>key){
			e=mid-1;
		}
	}
	return ans; 
}
int last_occurence(int a[],int n,int key){
	int s=0,e=(n-1);
	int ans=(-1);
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			ans = mid;
			s=mid+1;
		}else if(a[mid]<key){
			s=mid+1;
		}else if(a[mid]>key){
			e=mid-1;
		}
	}
	return ans;
}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;cin>>key;
	cout<<first_occurence(a,n,key)<<endl;
	cout<<last_occurence(a,n,key)<<endl;
	return 0;
}