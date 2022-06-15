// Binary_to_decimal.cpp
#include<iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ans=0;
	int i=0;
	while(n!=0)
	{
		
		int rem=n%10;
		ans+=rem*pow(2,i);
		i++;
		n=n/10;
	}
	cout<<ans;

	return 0;
}