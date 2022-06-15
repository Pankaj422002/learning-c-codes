// stringlength.cpp
#include <iostream>
#include <stdio.h>
using namespace std;
int stringlength(char a[]){
		int length=0;
		for(int i=0;a[i]!='\0';i++){
			length++;
		}
		return length;
	}
int main(){
	// freopen("myinput.txt","r",stdin);
	char ch[100];
	cout<<"enter the string: ";
	gets(ch);
	cout <<endl<<"string length is : "<< stringlength(ch) << endl;
	return 0;
}