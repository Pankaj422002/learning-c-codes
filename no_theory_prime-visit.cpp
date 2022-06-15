// no_theory_prime-visit.cpp
#include<iostream>
using namespace std;
#define int long long int
void prime_sieve(int prime[]){
	//all odd no can be the prime nos
	for(int i=3;i<=1000000;i+=2){
		prime[i]=1;
	}

	for(int i=3;i<=1000000;i+=2){
		if(prime[i]==1){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=0;
			}
		}
	}

	prime[0]=prime[1]=0;
	prime[2]=1;
}

int32_t main(){
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	int prime[1000000]={0};
	prime_sieve(prime);
	while(t--){
		int a,b;cin>>a>>b;

		int cnt=0;
		for(int i=a;i<=b;i++){
			if(prime[i]==1){
				cnt++; 
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}