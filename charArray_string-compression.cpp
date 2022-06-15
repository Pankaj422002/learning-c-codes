// charArray_string-compression.cpp
#include<iostream>
#include<string.h>
using namespace std;
void compressed(char a[]){
	int i=0;
	int len=strlen(a);
	while(i<len){
		char ch= a[i];
		int j=i;
		int cnt=0;
		while(j<len and a[j]==ch){
			cnt++;j++;
		}
		cout<<ch<<cnt;
		i=j;
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	char ch[1000];cin>>ch;
	compressed(ch);
	return 0;
}