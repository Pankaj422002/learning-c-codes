// basic_calculator.cpp
#include <iostream>
using namespace std;
int main()
{
	char ch;
   long long int n1,n2,n;
  
    cin >> ch;
	// cout<< ch<< n1<<n2<<"\n";

    while ( (ch!='X') and (ch!='x') )
      {  
		  
          if(ch=='*')
            {
				cin>>n1>>n2;
              n=n1*n2; cout<<n << "\n";
            }
          else if(ch=='/')
            {
				cin>>n1>>n2;
              n=n1/n2; cout<<n << "\n";
            }
          else if(ch=='+')
            {
				cin>>n1>>n2;
              n=n1+n2; cout<<n << "\n";
            }
          else if(ch=='-')
            {
				cin>>n1>>n2;
              n=n1-n2; cout<<n << "\n";
            }
          else if(ch=='%')
            {
				cin>>n1>>n2;
              n=n1%n2; cout<<n << "\n";
            }
          else 
            cout<<"Invalid operation. Try again.\n";


        cin >>ch;
      }
  
  return 0;
}