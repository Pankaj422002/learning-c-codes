// increasing_decreasing.cpp
#include <iostream>
using namespace std;
int main()
{
	freopen("myinput.txt","r",stdin);
	int n;  cin>>n;

	bool inc=false, dec=false;

	int curr,prev; cin >> prev;

	for(int i=1;i<n;i++)
	{
		cin>>curr;
		if(prev > curr)
		{
			if(inc==true)
			{
				cout<<"false";
				return 0;
			}

			dec=true;
		}
		else if (curr>prev)
		{
			inc=true;

		}
		else {
			cout<<"false";
			return 0;
		}
		prev=curr;
	}
	cout<<"true";
	return 0;
}