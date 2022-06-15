// pattern_with_zero.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1 or j==i)
			cout<<i << "\t";
			else  cout << "0\t";
		}
		cout<< "\n";
	}
	return 0;
}