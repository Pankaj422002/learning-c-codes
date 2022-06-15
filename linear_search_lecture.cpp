// linear_search_lecture.cpp
#include <iostream>
using namespace std;
void linearsearch(int n, int a[], int key)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		if (a[i] == key) {
			cout << "key found at " << i << " index";
			break;
		}
	}

	if (i == n)
		cout << "key not found";

}
int main()
{
	int n, key;
	cout << "enter the no. of element of array\n";
	cin >> n;

	int a[n];

	cout << "enter the array\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << "enter the element you want to search\n";
	cin >> key;

	linearsearch (n, a, key) ;
	return 0;
}

