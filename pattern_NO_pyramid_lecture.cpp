// pattern_NO_pyramid_lecture.cpp
 /*print pattern 
     n=5
         1
        232
       34543
      4567654
     567898765
*/
#include <iostream>
using namespace std;
int main()
{
	// freopen ("myinput.txt","r",stdin);
	// freopen ("myoutput.txt","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int k=i;
		for(int space=0;space<(n-i);space++)
		{
			cout<<"  ";
		}
		for(int j=0;j<i;j++)
		{
			cout<< k << " ";
			k+=1;
		}
		k=k-1;
		for(int l=0;l<(i-1);l++)
		{
			k-=1;
			cout<< k<<" ";
			
		}
		cout << endl;
	}
	return 0;
}