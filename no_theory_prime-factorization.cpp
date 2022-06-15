// no_theory_prime-factorization.cpp
#include<iostream>
#include<vector>
using namespace std;
#define int long long int 
void calculate_all_prime(vector<int>&prime){
	vector<int>p(10000,0);
	for(int i=3;i<=10000;i+=2)
		p[i]=1;

	for(int i=3;i<=10000;i+=2){
		if(p[i]){
			for(int j=i*i;j<=10000;j+=i){
				p[j]=0;
			}
		}
	}

	p[0]=p[1]=0;p[2]=1;
	for(int i=0;i<10000;i++){
		if(p[i]==1){
			prime.push_back(i);
		}
	}
}
vector<int> prime_factor(int n, vector<int>prime){
	vector<int> factor;
	int i=0; 
	for(int p=prime[i];p*p<=n;){
		while(n%p==0){
				factor.push_back(p);
				n=n/p;
			}
		i++;
		p=prime[i]; 
	}
	if(n>1)
		factor.push_back(n);
	return factor;
}
int32_t main(){
	freopen("input.txt","r",stdin);
	
/*	
	int n;cin>>n;
	vector<int> factor;

	//1. Naive approach: 

	for(int i=2;i<=n;i++){
		while(n%i==0){
			factor.push_back(i);
			n=n/i;
		}
	}
*/

/*
	//2. Optimised approach: 
	for(int i=2;(i*i)<=n;i++){	//for composite "n"
		while(n%i==0){
			factor.push_back(i);
			n=n/i;
		}
	}
	if(n>1){			//for prime "n"
		factor.push_back(n);
	}	
*/	

	//3. Prime Sieve based approach: 
	vector<int> prime;
	calculate_all_prime(prime);
	
	int n;cin>>n;
	vector<int> factor;
	factor = prime_factor(n,prime);

	for(auto it=factor.begin();it<factor.end();it++){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	return 0;
}