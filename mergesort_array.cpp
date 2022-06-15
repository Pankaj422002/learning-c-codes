// mergesort_array.cpp
#include<iostream>
using namespace std;
void mergearr(int a[], int l, int r){
	int mid = (l + r) / 2;
	int b[200];
	int i = l; int j = mid + 1;
	int k = l;
	while (i <= mid && j <= r) {
		if (a[i] < a[j]) {
			b[k] = a[i];
			++k; ++i;
		}
		else {
			b[k] = a[j];
			++k; ++j;
		}
	}
	while (i <= mid) {
		b[k] = a[i]; ++k; ++i;
	}
	while (j <= r) {
		b[k] = a[j]; ++k; ++j;
	}
	for(int i=l;i<=r;i++){
		a[i]=b[i];
	}
}
void mergesort(int a[], int l, int r) {
	if (l >= r)return;
	int mid = (l + r) / 2;
	mergesort(a, l, mid);
	mergesort(a, mid + 1, r);
	mergearr(a, l, r);
}
int main() {
	int a[7] = {1, 5, 3, 2, 88, 54, 33};
	mergesort(a, 0, 6);
	for (int i = 0; i < 7; i++)
		cout << a[i] << " ";
	return 0;
}

