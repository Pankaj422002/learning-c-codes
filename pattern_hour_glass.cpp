// pattern_hour_glass.cpp

// this is equivalent approach

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<=(2*n);i++)
	{
		for(int j=0;j<=2*n;j++)
		{
			int ieq,jeq;
			if(j<=n)
			jeq=j;
			else jeq=(2*n-j);

			if(i<=n)
			ieq=i;
			else ieq=(2*n-i);

			if(jeq<=ieq)
			cout<<n-jeq<<" ";
			else
			cout<< "  ";
		}
		cout<<"\n";
	}
	return 0;
}