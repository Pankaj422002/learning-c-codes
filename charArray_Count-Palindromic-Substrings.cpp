// charArray_Count-Palindromic-Substrings.cpp
#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrome(char ch[]){
	int len=strlen(ch);
	for(int i=0,j=len-1;i<j;){
		if(ch[i]!=ch[j]){
			return false;
		}
		i++;j--;
	}
	return true;
}
void countpalindrome(char a[]){
	int len= strlen(a);
	int cnt=0;
	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			
			char temp[1000];int l=0;
			for(int k=i;k<=j;k++){
				temp[l]=a[k];
				l++;
			}
			temp[l]='\0';
			bool flag=ispalindrome(temp);
			if(flag==true){
				cnt++;
			}

		}
	}
	cout<<cnt<<endl;
}
int main() {
	char arr[1000];
	cin>>arr;
	countpalindrome(arr);
	return 0;
}