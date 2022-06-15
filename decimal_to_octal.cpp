// decimal_to_octal.cpp
#include <iostream>
using namespace std;
int main()
{
	int decimal; 
	cin>>decimal;
	// decimal = 63;
	int k=1,rem=0;
	int octal=0;
	while(decimal!=0)
	{
		rem=decimal%8;
		octal+=rem*k;
		k=k*10;
		decimal=decimal/8;
	}
	cout<<octal;
	return 0;
}