// no_theory_no-of-divisor.cpp
//count the no of divisor of a no
#include<iostream>
#include <vector>
using namespace std;
#define int long long int
void calculate_all_prime(vector<int>&prime){
	vector<int>p(100000,0);
	for(int i=3;i<=100000;i+=2){
		p[i]=1;
	}

	for(int i=3;i<=100000;i+=2){
		if(p[i]){
			for(int j=i*i;j<=100000;j+=i){
				p[j]=0;
			}
		}
	}
	p[0]=p[1]=0;p[2]=1;

	for(int i=0;i<=100000;i++){
		if(p[i]){
			prime.push_back(i);
		}
	}

}
int32_t main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;

/*
	//1. naive approach: 
	int cnt=0; 
	vector<int>v;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			v.push_back(i);
			cnt++;
		}
	}
	cout<<cnt<<endl;
	for(auto it : v){
		cout<<it<<" ,";
	}
	cout<<endl;
*/

/* 
	//2. optimised approach : by using prime numbers.
	//use pnc : n=a^i*b^j*c^k then the no. of divisors:(i+1)*(j+1)*(k+1);
	int cnt,ans=1;
	for(int i=2;i*i<=n;i++){	//composite
		cnt=0; 
		while(n%i==0){
			cnt++;
			n=n/i;
		}
		ans = ans*(cnt+1);  
	}
	if(n>1){					//prime number
		ans = ans*2;
	}

	cout<<ans<<endl;
*/ 

	//3. using prime sieve approach to calculate the no of divisors
	vector<int>prime;
	calculate_all_prime(prime);

	int i=0;
	int cnt,ans=1;
	for(int p=prime[i];p*p<=n;){
		cnt=0;
		while(n%p==0){
			cnt++;
			n=n/p;
		}
		ans = ans*(cnt+1);
		i++;
		p=prime[i]; 
	}
	if(n>1){
		ans=ans*2;
	}
	cout<<ans<<endl;
	return 0;
}