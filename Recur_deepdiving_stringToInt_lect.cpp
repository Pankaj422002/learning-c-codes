// Recur_deepdiving_stringToInt_lect.cpp
#include<iostream>
#include<string.h>
using namespace std;
int StringToInt(char ch[],int n){
	if(n==0)
		return 0;

	int digit= ch[n-1] - '0';
	return StringToInt(ch,n-1)*10 + digit;
}
int main(){
	char ch[]="1234";
	int n = strlen(ch);
	int ans=StringToInt(ch,n);
	cout<<ans<<endl;
	cout<<ans+1<<endl;
	return 0;
}