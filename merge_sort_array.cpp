// merge_sort_array.cpp
#include<iostream>
using namespace std;
void mergearr(int a[], int l, int r) {
	int i = l;
	int mid = (l + r) / 2;
	int j = mid + 1;
	int k = l; int temp[200];
	while (i <= mid && j <= r) {
		if (a[i] < a[j]) {
			temp[k++] = a[i++];
		}
		else {
			temp[k++] = a[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = a[i++];
	}
	while (j <= r) {
		temp[k++] = a[j++];
	}
	for (int i = l; i <=r; i++)
		a[i] = temp[i];
}
void mergesort(int a[], int l, int r) {

	if (l >= r)return;

	int mid = ((l + r) / 2);

	mergesort(a,l, mid);
	mergesort(a, mid + 1, r);
	mergearr(a, l, r);
}
int main() {

<<<<<<< HEAD
	freopen("input.txt","r",stdin);
=======
	freopen("myinput.txt","r",stdin);
>>>>>>> 46f9d76ee9b987ed84a7a3e79f4280b8958f68ad
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];

	mergesort(a,0,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
