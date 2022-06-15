// charArray_form-Biggest-No.cpp
#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b){
	string ab = a+b;
	string ba = b+a;

	return (ab>ba)?1:0;
}
void biggest_no(string a[1000],int n){
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	string a[1000]; int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	biggest_no(a,n);
	return 0;
}