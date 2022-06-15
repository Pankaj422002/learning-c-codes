// delhi_odd_even.cpp
/*		Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. 
		The scheme is as follows, each car will be allowed to run on Sunday 
		if the sum of digits which are even is divisible by 4 
		or sum of digits which are odd in that number is divisible by 3. 
		However to check every car for the above criteria can't be done by the Delhi Police.
 		You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
 */
#include <iostream>
using namespace std;
int main()
{
	int n,carno;
	cin>> n;
	for(int i=0;i<n;i++)
		{
			cin>>carno;
			int rem=0;
			int sum1=0,sum2=0;
			while(carno!=0)
				{
					
					rem=carno%10;
					
					if(rem%2==0)
						sum1+=rem;
					else 
						sum2+=rem;
				

					carno=carno/10;
				}	
								
				if(((sum2%3)!=0)&&((sum1%4)!=0))
						cout<< "No \n";
					else if(((sum2%3)==0)||((sum1%4)==0))
						cout<<"Yes \n";
		}
	return 0;
}