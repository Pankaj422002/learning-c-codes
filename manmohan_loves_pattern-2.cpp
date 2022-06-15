// manmohan_loves_pattern-2.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<"1 \n";
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0 or j==i)
			{
				cout<< i;
			}
			else 
			cout<<"0";
		}
		cout<<"\n";
	}
	return 0;
}