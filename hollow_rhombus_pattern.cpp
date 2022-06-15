// hollow_rhombus_pattern.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// n=5;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<(n-i-1);j++)
		cout<<" ";
		if(i==0)
		 {
			 for(int k=0;k<n;k++)
			 cout<<"*";
		 }
		 else if(i<(n-1))
		 {
			cout<<"*";
			for(int l=0;l<(n-2);l++)
			cout<<" ";
			cout<<"*";

		 }
		 else 
		 {
			 for(int m=0;m<n;m++)
			 cout<<"*";
		 }

		 cout<<"\n";

	}
	return 0;
}