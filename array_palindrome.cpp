// array_palindrome.cpp
#include <iostream>
using namespace std;
void ispalindrome(int arr[],int n){
	int flag=1; 
	for(int i=0,j=(n-1);i<(n/2);i++,j--){
		if(arr[i]!=arr[j]){
			flag=0;
			break;
		}
	}
	if(flag==0)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;

}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ispalindrome(arr,n); 
	return 0;
}