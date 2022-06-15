// nth_fibonacci_pattern.cpp
// 0 1 1 2 3 5 8 13 21 34     input: n=5th element , output: 3
#include <iostream>
using namespace std;
void fibonacci(int n)
{
	int a=0;
	int b=1;
	int c;
	for(int i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<< c;
}
int main()
{
	int n;
	// cin>>n;
	n=5;
	fibonacci(n);
	return 0;
}