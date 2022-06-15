// pythagorean_triplet.cpp
/* 
Given a number N (denoting one of the legs of the triangle), 
Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".
*/
#include <iostream>
using namespace std ;
int main()
{
	long long int n;
	cin>>n;
	if(n<3)
	cout<<"-1"; // if n<3 then pythagoreon triplet is not form 
	else  			// if n>3 then only pythagoreon triplet is form
	{
			if(n%2==0)
		{
			cout<< (((n/2)*(n/2))-(1)) <<" "  << (((n/2)*(n/2))+1) ;
		}
		else 
			cout<< (2*((n+1)/2)*((n-1)/2)) <<" " << ((((n+1)/2)*((n+1)/2))+(((n-1)/2)*((n-1)/2)));
			
	}
	return 0;
}