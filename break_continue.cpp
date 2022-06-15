// break_continue.cpp
#include <iostream>
using namespace std;
int main()
{
	// freopen("myinput.txt","r",stdin);
	// freopen("myoutput.txt","w",stdout);
	int n;

	while(true)
	{
		cin>>n;
		
			if(n%13==0)
			{
				continue; // skip all the statement below it  in the loop 
			}
			if(n%7==0)
			{
				break; // skip all the statements below the loop and we reach out of the loop 
			}

		cout<<"no: "<<n <<"\n";
	}

	cout<<"came out of the loop ";
	return 0;
}