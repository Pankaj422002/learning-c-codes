// characterArray_largestString.cpp
#include<iostream>
#include<string.h>
using namespace std;
void copy(char largest[],char a[]){
	int len=strlen(a);
	for(int i=0;i<=len;i++){
		largest[i]=a[i]; 
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	//1. take input string
	int n;cin>>n;

	// declare the arrays
	char a[100]; 
	int length, max=0;
	char max_array[100];

	// loop for "n" no. of strings
	cin.get();
	for(int i=0;i<n;i++){
		// take strings
		cin.getline(a,100);

		//calculate the length of string
		length=strlen(a);

		//make track of largest string and largest length
		if(length>max){
			max=length;
			copy(max_array,a);
		}

	}

	// print the max array and length of max array
	cout<<max_array<<endl;
	cout<<"length: "<<max;
	return 0;
}