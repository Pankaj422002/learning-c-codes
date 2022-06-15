// recursion_replace_pi.cpp
#include<iostream>
using namespace std;

//without using recursion
void Replace_pi_1(char ch[]){

	for(int i=0;ch[i]!='\0';){
		//if pi found 
		if(ch[i]=='p' and ch[i+1]=='i'){
			//code: 
			//1. take j to the end of the char array.
			//2. shift all the character by two positions right
			//3. place 3.14 
			int j = i+2; 
			while(ch[j]!='\0'){
				j++; 
			}

			while(j>=i+2){
				ch[j+2]=ch[j];
				j--;
			}

			ch[i]='3';ch[i+1]='.';ch[i+2]='1';ch[i+3]='4'; 
			
			i+=4;

		}else{
			i++; 
		}
	}
}

//using recursion
void Replace_pi_2(char ch[],int i){
	//base case: 
	if(ch[i]=='\0')
		return;

	//recursive case: 
	if(ch[i]=='p' and ch[i+1]=='i'){
		//code: 
		//1.take j as temperary variable and move it to end.
		//2.shift all character two units right.
		//3.place 3.14 in place of pi.
		int j=i+2;
		while(ch[j]!='\0')
			j++;

		while(j>=i+2){
			ch[j+2]=ch[j];
			j--;
		}

		ch[i]='3';
		ch[i+1]='.';
		ch[i+2]='1';
		ch[i+3]='4'; 


		Replace_pi_2(ch,i+4);
	}else{
		Replace_pi_2(ch,i+1);
	}

}
int main(){
	freopen("input.txt","r",stdin);
	//take input of string 
	char ch[100];
	cin>>ch;
	// Replace_pi_1(ch);
	Replace_pi_2(ch,0);
	cout<<ch<<endl;
	return 0;
}