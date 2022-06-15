// function_ABCD_lecture.cpp
/* print following pattern : 
	ABCDE
	ABCD
	ABC
	AB
	A
*/
#include <iostream>
using namespace std;
void printabcd(int n){
	
	for(int i=0;i<n;i++)
	{
		char alphabet='A';
		for(int j=0;j<n-i;j++)
		{
			cout<< alphabet ;
			alphabet+=1;
		}
		cout<<"\n";
	}
}
int main()
{
	int n;
	cin>>n;
	// n=5;
	printabcd(n);

	return 0;
}