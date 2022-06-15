// print_patter_0&1_lecture.cpp
/* 	print pattern 
		if n=5 then print following : 
			0
			10
			010
			1010
			01010
*/
#include <iostream>
using namespace std ;
int main()
{

		
	freopen("myinput.txt","r",stdin);
	int n;
	cin>> n;
	
	for (int i=0;i<n;i++)
	{
		int flag;
		if((i%2)!=0)
			{
				flag=1;
			}
		else flag=0;

		for(int j=0;j<=i;j++)
		{
			cout << flag;
			flag = 1 - flag;
		}
		cout<<"\n";
		
	}
	return 0;
}