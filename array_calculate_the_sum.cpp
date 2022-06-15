// array_calculate_the_sum.cpp
#include <iostream>
using namespace std;
#define mod 1000000007
#define int long long int
// 1. Brute force approach
void calculate_sum(int a[],int n,int Q){
	for(int q=0;q<Q;q++){
		int x;cin>>x;
		int b[1000];
		// cout<<"x : "<<x<<endl;
		if(x==0){
			for(int i=0;i<n;i++){
				b[i]=a[i]+a[i];
				// cout<<b[i]<<" ";
			}
		}else{
			for(int i=0;i<n;i++){
				for(int j=1;j<=x;j++){
					if((i-j)>=0)
						b[i]=a[i]+a[i-j];
					else
						b[i]=a[i]+a[i-j+n];
					// cout<<b[i]<<" ";
				}
			}
		}
		for(int i=0;i<n;i++)
			a[i]=b[i];
	}
	// //print array
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	//finding sum 
	int sum=0;  
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<sum%mod<<endl;
}
int32_t main(){
	freopen("input1.txt","r",stdin);
	int n;cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int Q;cin>>Q;
	calculate_sum(a,n,Q);
	return 0;
}