// Pattern_mountain.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	for(int i=0,k=2; i<n ; i++,k+=2)
	{
		int j=1;
		for( ; j<=i+1 ; j++)
		{
			cout<< j << "\t";
		}
		int p=0;
		while(p<((2*n-1)-k))
		{
			cout<<" "<<"\t";
			p++;
		}
		// cout<< "\n" << j <<"\n";
		for(int l=(j-1);l>0;l--)
		{
			if(l!=n)
			cout<<l<<"\t";
			else
			{
				l--;
				if((l)!=0)
				cout<< l <<"\t";
				
			}
		}

		cout<<"\n";
	
		
	}
	return 0;
}