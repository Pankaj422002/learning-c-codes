// characterArray_input_lecture.cpp
#include<iostream>
using namespace std;
void readline(char a[],char delimiter){
	char ch=cin.get(); 
	int i=0;
	while(ch!=delimiter){
		a[i]=ch;
		i++;
		ch=cin.get();
	}
	a[i]='\0';
}
int main(){
	char a[100];
	readline(a,'\n');
	// cin.getline(a,100);
	// cin.get(a,100);
	cout<<a<<endl;

	return 0;
}