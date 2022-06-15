// Binary_search_aggressive_cow.cpp
#include<iostream>
#include<algorithm>
using namespace std;
#define int long long int 
int no_of_cows(int a[],int n,int dist){
	int x=0,y=1;
	int cows=1;
	for(int i=1;i<n;i++){
		if(dist <= a[y]-a[x]){
			cows++;
			x=y;
			y++;
		}else {
			y++;
		}
	}
	return cows;
}
int aggressive_cow(int a[],int n,int cow){
	int k=a[n-1]-a[0];
	int s=0,e=k;
	int ans=(-1); 
	while(s<=e){
		int mid=(s+e)/2;
		if(no_of_cows(a,n,mid)>=cow){
			ans = mid;
			s=mid+1; 
		}else if(no_of_cows(a,n,mid)<cow){
			e=mid-1;
		}
	}
	return ans;
}
int32_t main(){
	// freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[100000];
	int cow;cin>>cow;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	// cout<<no_of_cows(a,n,4)<<endl;
	cout<<aggressive_cow(a,n,cow)<<endl;
	return 0;
}