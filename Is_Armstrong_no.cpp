// Is_Armstrong_no.cpp
#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int k=n;
	int l=n;
	int count=0;
	while(k!=0)
	{
		count++;
		k/=10;
	}

	int ans=0;
	while(n!=0)
	{
		int multiply=1;
		int rem=n%10;
		for(int i=0;i<count;i++)
		{
			multiply = multiply*rem;
		}
		ans+=multiply;
		n=n/10;
	}
	if(l==ans)
		cout<<"true";
	else cout<<"false";
	
	return 0;
}