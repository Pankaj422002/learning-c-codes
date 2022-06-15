/* // pascal_triangle.cpp
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	// n=4;
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i;s++)
			cout<<"  ";
		for(int j=0;j<=i;j++)
		{
			int binomial=1;
			int r=j;
			if(r>i-r)
				r=i-r;
			for(int l=0;l<r;l++)
			{
				binomial*=(i-l);
				binomial/=(l+1);
			}
			cout<<binomial<<"   ";

		}
		cout<<"\n";
	}
	return 0;
}
*/
 
// another method "arrays"
#include <iostream>
using namespace std;
int main()
{
	int n;
	// cin>>n;
	n=4;
	int arr[100][100];
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i;s++)
			cout<<"  ";
		for(int j=0;j<=i;j++)
		{
			if(i==j||j==0)
				arr[i][j]=1;
			else 
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];

			cout<<arr[i][j]<<"   ";
		}
		cout<<"\n";
	}
	return 0;
}
/*
third method: optimal approach of binomial coff.

#include <iostream>
using namespace std;
int main()
{
	int n;
	// cin>>n;
	n=4;
	for(int i=1;i<=n;i++)
	{
		for(int s=0;s<n-i;s++)
			cout<<"  ";
		int c=1;
		for (int j=1;j<=i;j++)
		{
			cout<< c <<"   ";
			c=(c*(i-j))/j;
		}
		cout<<"\n";
	}
	return 0;
}
*/

