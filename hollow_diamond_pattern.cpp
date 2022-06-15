// hollow_diamond_pattern.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// n=67;
	int jeq, ieq;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<=n/2)
			jeq = j;
			else jeq=((n-1)-j) ;

			if(i<=n/2)
			ieq = i;
			else ieq= ((n-1)-i);

			if(jeq<=((n/2)-ieq))
			cout<<"*\t";
			else cout<< " \t";
		}
		cout<<"\n";
	}
	return 0;
}