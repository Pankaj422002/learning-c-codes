// charArray_string-concat&compare.cpp
#include <iostream>
#include<string.h>
using namespace std;
// 1. string concatination
void stringcontatination(char a[],char b[]){
	int lena=strlen(a);
	int lenb=strlen(b);
	int i=lena;
	for(int j=0;j<=lenb;j++){
		a[i]=b[j];
		i++;
	}
}

// 2. string compare 
bool stringcompare(char a[],char b[]){
	int lena=strlen(a);
	int lenb=strlen(b);
	int i=0,j=0;
	while(i<lena and j<lenb){
		if(a[i]!=b[j]){
			return false;
		}
		i++;j++;
	}
	if(a[i]=='\0' and b[j]=='\0'){
		return true;
	}
	if(a[i]=='\0' or b[j]=='\0'){
		return false;
	}
}

int main(){
	freopen("myinput.txt","r",stdin);
	char a[1000],b[1000];
	cin>>a>>b;
	cout<<"Before : "<<a <<" and "<<b<<endl;
	// 1. string contatination

	// stringcontatination(a,b);
	// strcat(a,b);
	// cout<<"strcat: "<<a<<endl;

	// 2. string compare

	// bool flag=stringcompare(a,b);
	bool flag=strcmp(a,b);
	if(flag==true)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}