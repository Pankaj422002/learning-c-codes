// prime.cpp
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for( i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"Not Prime";
			return 0;
		}

	}
	if(i==n)
		cout<<"Prime";
	return 0;
}