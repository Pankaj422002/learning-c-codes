// recursion_phone-key.cpp
#include<iostream>
using namespace std;
string a[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void phone_keypad(string str,int i,char output[],int k){
	//base case : 
	if(str[i]=='\0'){
		output[k]='\0';
		cout<<output<<", ";
		return;
	}

	//recursive case :
	int digit=str[i]-'0';

	//if digit is 0 or 1 then just skip that..
	if(digit==0 or digit==1){
		phone_keypad(str,i+1,output,k);
	}


	string x = a[digit];
	for(int j=0;x[j]!='\0';j++){
		output[k]=x[j];
		phone_keypad(str,i+1,output,k+1);
	}

}
int main()
{
	freopen("input.txt","r",stdin);
	string str;cin>>str;
	char output[100];
	phone_keypad(str,0,output,0);
	return 0;
}