// pattern_no_and_star-1.cpp

#include<iostream>
using namespace std;
int main() {
	int n,j;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			cout<<j<<" ";
		}
		for(int k=j-1;k<n;k++)
		cout<<"*"<<" ";
		for(int l=0;l<(i-2);l++)
		cout<<"* ";

		cout<<"\n";

	}
	return 0;
}