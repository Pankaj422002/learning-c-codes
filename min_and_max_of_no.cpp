// min_and_max_of_no.cpp
// #include <iostream>
// using namespace std ;
// int main()
// {
// 	freopen("myoutput.txt","w",stdout);
// 	freopen("myinput.txt","r",stdin);
// 	int n,n1;
// 	int min,max;
// 	cin >> n;
// 	cout << "\n\n";
	
// 	cout << "enter the no.s  : \n";
// 	cin >> n1;
// 	min = n1;
// 	max=n1;
// 	for (int i=0;i<n-1;i++)
// 	{
// 		cin >> n1;
// 		if (min>n1)
// 		{
// 			min = n1;
// 		}
// 		if(max<n1)
// 		{
// 			max=n1;
// 		}
// 	}

// 	cout <<"min of no. is : " << min;
// 	cout <<"\n max of no. is : " << max;
// 	return 0;
// }
#include <iostream>
#include <climits>
using namespace std ;
int main()
{
	freopen("myinput.txt","r", stdin);
	freopen("myoutput.txt","w",stdout);
	int n;
	cin >> n;
	int min_so_far = INT_MAX;
	int max_so_far = INT_MIN;
	int no;
	cout << "enter the no.s : \n " ;
	for(int i=0;i<n;i++)
	{
		cin>> no;
		if(no<min_so_far)
		{
			min_so_far = no;
		}
		if(no > max_so_far)
		{
			max_so_far = no;
		}
	}
	cout << "\n maximum no. is : " << max_so_far;
	cout<< "\n minimum no. is : " << min_so_far;
	return 0;
}