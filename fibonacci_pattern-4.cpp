// fibonacci_pattern-4.cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=0,b=1,c=1;
	cout<<a<<"\n";
	for(int i=1;i<n;i++)
	{
		
		for(int j=0;j<=i;j++)
			{
				cout<< c <<"\t" ;

				c=a+b;

				a=b;
				b=c;
			}
			cout<<"\n";
	}
	return 0;
}

// other way is  :
/* 
	    #include<iostream>
		using namespace std;
		int main() {
			int n;
			cin>>n;
			int a=0,b=1,c=0;
			
		 for (int i=0;i<n;i++)
		 {
			 for(int j=0;j<=i;j++)
			 {
				
				 cout<<c<<"\t";
				 a=b;
				 b=c;
				 c=a+b;
			 }
			 cout<<"\n";
		 }
		 
			return 0;
		}

*/