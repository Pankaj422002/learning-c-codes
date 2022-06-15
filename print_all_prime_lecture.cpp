// print_all_prime_lecture.cpp
// input: n=5 output: 1 2 3 5 
#include <iostream>
using namespace std;
bool isprime(int n)
	{
		
		for(int i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		
		return true;
	}
void printprime(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(isprime(i))
			cout<< i<<" " ;
		
	}
}
int main()
{
	int n;
	cin>>n;
	// n=5;
	printprime(n);
	return 0;
}