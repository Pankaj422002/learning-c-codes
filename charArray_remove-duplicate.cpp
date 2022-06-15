// charArray_remove-duplicate.cpp
#include<iostream>
#include<string.h>
using namespace std;
void remove_duplicate(char a[]){
	int i=0;
	int len=strlen(a);
	while(i<len){
		int j=i;
		char ch=a[i];
		while(j<len and a[j]==ch){
			j++;
		}
		cout<<ch;
		i=j;
	}
}
int main() {
	char ch[1000];
	cin>>ch;
	remove_duplicate(ch);
	return 0;
}