// characterArray_reverseString.cpp
#include<iostream>
#include<string.h>
using namespace std;
//1.brute force approach
void reversestring_1(char a[1000],int n){
	int len=strlen(a);
	int k=0;
	while(k<n){
		int j=len-1;
		int i=j-1;
		char pickup=a[j];
		while(i>=0){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=pickup;
		k++;
	}
	cout<<"reversestring_1() : "<<a<<endl;
}

//2. more appropriate approach
void reversestring_2(char a[1000],int n){
	int len=strlen(a);

	// move our whole string to n time ahead
	int i=len-1;
	while(i>=0){
		a[i+n]=a[i];
		i--;
	}

	//copy the last part to front of the string
	int j=len;
	i=0;
	while(i<n){
		a[i]=a[j];
		i++;j++;
	}
	a[len]='\0';
}


int main(){
	freopen("myinput.txt","r",stdin);
	char ch[1000];
	cin.getline(ch,100);
	int n;cin>>n;
	cout<<"string before rotation: "<<ch<<endl;
	// reversestring_1(ch,n);
	reversestring_2(ch,n);
	cout<<"string after rotation: "<<ch<<endl;
	return 0;
}