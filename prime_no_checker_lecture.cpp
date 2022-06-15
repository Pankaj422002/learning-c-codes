// prime_no_checker_lecture.cpp
#include <iostream>
using namespace std;
int main()
{
	int n,i;
	bool flag=0;
	cin>> n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"no. is not prime: \n";
			break;
		}
	}

	if(i==n)
	{
		cout<< "no. is prime: \n" ;
	}
	return 0;
}