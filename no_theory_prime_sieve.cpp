// no_theory_prime_sieve.cpp
#include<iostream>
using namespace std;
void prime_sieve(int prime[],int n){
	//all odd nos may be the answer: 
	for(int i=3;i<=n;i+=2){
		prime[i]=1;
	}

	for(int i=3;i<=n;i+=2){
		if(prime[i]==1){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=0;
			}
		}
	}
	prime[2]=1;
	prime[0]=prime[1]=0;
}
int main(){
	int n=100;
	int prime[n]={0};
	prime_sieve(prime,n);
	for(int i=0;i<n;i++){
		if(prime[i]){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}