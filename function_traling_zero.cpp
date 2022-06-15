// function_traling_zero.cpp
#include <iostream>
using namespace std;
int countzeros(int n)
{
	int count=0;

	for(int r=5;(n/r)>=1;r=r*5)
	{
		count+=(n/r);
	}
	return (count) ;
}
int main()
{
	int n;
	cin>>n;
	// n=5;
	cout<< countzeros(n);
	return 0;
}