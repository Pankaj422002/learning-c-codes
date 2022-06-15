// book_allocation.cpp
#include<iostream>
using namespace std;
bool ispossible(int check,int a[],int m,int n){
	int student=0;
	int cnt=1;
	for(int i=0;i<n;i++){

		student+=a[i];
		if(student>check){
			cnt++;
			if(a[i]<=check)
				student=a[i];
			else
				return false;
		}
	}
	if(cnt>m){
		return false;
	}else{
		return true;
	}
}
int book_allocation(int n,int m,int a[]){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	int ans=-1;
	int s=0;
	int e=sum;
	while(s<=e){
		int mid=(s+e)/2;
		if(ispossible(mid,a,m,n)==true){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	return ans;
}
int main() {
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[1000];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<< book_allocation(n,m,a) << endl;
	}

	return 0;
}