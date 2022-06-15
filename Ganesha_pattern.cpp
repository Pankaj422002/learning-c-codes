// Ganesha_pattern.cpp
#include <iostream>
using namespace std;
int main()
{
	// freopen("myinput.txt","r",stdin);
	int n;
	cin>> n;

	int i;
	for(i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			// first line 
			if(i==0)
			{
				if(j==0)
					cout<< "*";
				else if (j< n/2)
					cout<<" ";
				else cout<< "*";

			}

			// b/w first and middle line 
			else if(i < n/2)
			{
				if(j==0)
					cout<<"*";
				else if(j<n/2)
					cout<<" ";
				else if(j==n/2)
					cout<<"*";
			}

			// // middle line 
			else if(i==n/2)
				cout<<"*";

			// // b/w middle line and last line 
			else if (i<(n-1))
			{
				if(j<n/2)
					cout<<" ";
				else if(j==n/2)
					cout<<"*";
				else if(j<(n-1))
					cout<<" ";
				else 
					cout<<"*";
			}

			// // last line of pattern 
			else 
			{
				if(j<=n/2)
					cout<<"*";
				else if(j<(n-1))
					cout<<" ";
				else 
					cout<<"*";
			}
		}
		cout<<"\n";
	}
	return 0;
}