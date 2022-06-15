// pattern_triangle.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			cout<<" " <<"\t";
		}
		int k=i+1;
		while(k<=(2*i + 1))
		{
			cout<< k <<"\t";
			k++;
		}
		k=k-1;
		int l=k-1;
		while(l>i)
		{
			cout<<l<<"\t";
			l--;
		}

		cout<<"\n";
		
	}
	return 0;
}