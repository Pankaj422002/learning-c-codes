// factorial_and_ncr_lecture.cpp
#include <iostream>
using namespace std;
int factorial(int n)
	{
		int fact=1;
		for(int i=1;i<=n;i++)
			fact=fact*i;
		return fact;
	}
int ncr(int n,int r)
{
	int binomial;
	binomial=((factorial(n))/((factorial(n-r))*(factorial(r))));
	return binomial;
}
int main()
{
	int n,r;
	cout<<"input n and r:\n";
	cin>>n>>r;
	cout<<"\nyour ncr is : "<< ncr(n,r);
	return 0;
}