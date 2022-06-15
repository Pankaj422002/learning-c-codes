// von_neuman_loves_binary.cpp
#include<iostream>
#include <math.h>
using namespace std;
int main() {
	freopen("myinput.txt","r",stdin);
	int n;
	cin>> n;
	int x;
	for (int i=0;i<n;i++)
	{
		int ans=0,rem=0;
		cin>>x;
		int k=0;
		while (x!=0)
		{
			rem=x%10;
			ans=ans+rem*pow(2,k);
			x=x/10;
			k++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}