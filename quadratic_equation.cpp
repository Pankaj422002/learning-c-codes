// quadratic_equation.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	freopen("myinput.txt","r",stdin);
	int a,b,c;
	cin>>a>>b>>c;
	int r1,r2;
	int D;
	D = ((b*b)-4*a*c);
	if(D<0)
	{
		cout<<"Imaginary \n";

	}
	else if (D>0)
	{
		cout<<"Real and Distinct \n";
		r1=(-b + (sqrt(D)))/2*a;
		r2=(-b - (sqrt(D)))/2*a;
		cout<<r2 << " " << r1;
	}
	else 
	{
		cout<<"Real and Equal \n";
		r1=(-b + (sqrt(D)))/2*a;
		r2=(-b - (sqrt(D)))/2*a;
		cout<<r2 << " " << r1;
	}
	return 0;
}