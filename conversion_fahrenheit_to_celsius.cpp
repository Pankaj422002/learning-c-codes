// conversion_fahrenheit_to_celsius.cpp
#include <iostream>
using namespace std;
int main()
{
	int min,max,steps;
	cin>> min>>max>>steps;
	for(int i=min;i<=max ;i+=steps)
	{
		cout<<i<<" "<< (5*(i-32))/9 << "\n";
	}
	return 0;
}