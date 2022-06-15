// characterArray_Ispalindrome.cpp
#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrome(char ch[]){
	int len = strlen(ch);
	for(int i=0,j=(len-1); i<j;){
		if(ch[i]!=ch[j]){
			return false;
		}
		i++;j--;
	}
	return true;
}
int main() {
	char a[1000];
	cin>>a;
	bool flag = ispalindrome(a);
	if(flag==true)
		cout<<"true";
	else 
		cout<<"false";
	return 0;
}