// characterArray_freq-Calculate.cpp
#include<iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	char ch[100];
	cin.getline(ch,100);
	int freq[26]={0};
	int i=0;
	while(ch[i]!='\0'){
		int index=ch[i]-'a';
		freq[index]+=1;
		i++;
	}

	for(int j=0;j<26;j++){
		if(freq[j]>0){
			char p = j+'a';
			cout<<"frequency of "<< p <<"----> "<<freq[j]<<endl;
		}	
	}

	return 0;
}