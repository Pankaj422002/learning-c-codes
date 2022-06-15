// no_theory_Not-So-Easy-math.cpp
#include<iostream>
using namespace std;
#define int long long int
int32_t main(){
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[]={2,3,5,7,11,13,17,19};	

		int ans=0;int j=0; 
		int no_of_subset = 1<<8; 	// no = a<<b:no= a*2^b;
		for(int i=1;i<no_of_subset;i++){
			int no=i;int m=1;int cnt=0;j=0; 
			while(no!=0){
				if(no&1){
					cnt++;
					m=m*a[j];
				}
				no=no>>1;j++;
			}

			if(cnt%2==0){
				ans = ans - (n/m); 
			}else{
				ans = ans + (n/m);
			}



		}
		cout<<ans<<endl;
		
	}

	return 0;
}