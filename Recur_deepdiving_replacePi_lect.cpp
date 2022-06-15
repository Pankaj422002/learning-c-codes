// Recur_deepdiving_replacePi_lect.cpp
#include<iostream>
using namespace std;
void Replace_pi(char *ch,int i){
	if(ch[i] == '\0' || ch[i+1]=='\0')
		return;

	if(ch[i] == 'p' && ch[i+1] == 'i'){
		int j=i+2;
		while(ch[j] != '\0'){
			j++;
		}
		while(j>=i+2){
			ch[j+2]=ch[j];
			j--;
		}
		ch[i]='3';ch[i+1]='.';
		ch[i+2]='1';ch[i+3]='4';

		Replace_pi(ch,i+4);


	}else{
		Replace_pi(ch,i+1);
	}
}
int main(){
	char ch[]="apixpimy";
	// cin>>ch;
	Replace_pi(ch,0);
	cout<<ch<<endl;
	return 0;
}