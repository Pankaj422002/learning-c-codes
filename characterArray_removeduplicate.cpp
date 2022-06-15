// characterArray_removeduplicate.cpp
#include<iostream>
#include<string.h>
using namespace std;
void removeconsecutive(char ch[]){
	int j=1,i=0;
	int len=strlen(ch);
	while(j<len){
		if(ch[i]!=ch[j]){
			i++;
			ch[i]=ch[j];
		}
		j++;
	}
	ch[i+1]='\0';
	cout<<ch<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	char a[100];
	cin.getline(a,100);
	removeconsecutive(a);
	return 0;
}