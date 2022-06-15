// no_theory_check-largeprimeno.cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int prime_no_bits[10000000]={0};
vector<int>primes;
void calculate_all_prime(){
	for(int i=3;i<10000000;i+=2)
		prime_no_bits[i]=1;
	primes.push_back(2);
	for(int i=3;i<10000000;i+=2){
		if(prime_no_bits[i]==1){
			primes.push_back(i);
			for(int j=i*i;j<10000000;j+=i){
				prime_no_bits[j]=0;
			}
		}
	}

}
bool prime_no_checker(int n){
	if(n<10000000){
		if(prime_no_bits[n]){
			return true;
		}else
			return false;
	}

	int i=0; 
	for(int p=primes[i];p*p<=n;){
		if(n%p==0){
			return false;
		}
		i++;
		p=primes[i];
	}
	return true;

}
int32_t main()
{
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	calculate_all_prime();

	// prime_no_checker(n);
	cout<<prime_no_checker(n)<<endl;
	return 0;
}