// largest_and_smallest_lecture.cpp
 #include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int smallest = INT_MAX;
	int largest =INT_MIN;

	for(int i=0;i<n;i++){
		if(a[i]>largest)
			largest=a[i];
		if(a[i]<smallest)
			smallest=a[i];
	}
	cout<<"largest   "<<largest<<endl;
	cout<<"smallest   "<<smallest<<endl;

	return 0;

}
// another method 
/*
#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int largest=INT_MIN;
	int smallest=INT_MAX;

	for(int i=0;i<n;i++)
	{
		largest=max(a[i],largest);
		smallest=min(a[i],smallest);
	}
	cout<<"largest   "<<largest<<endl;
	cout<<"smallest   "<<smallest<<endl;

	return 0;

}
*/