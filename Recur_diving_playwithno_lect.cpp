// Recur_diving_playwithno_lect.cpp
#include<iostream>
using namespace std;
string str[]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};
void Integer_to_string(int n){
	if(n==0)
		return;
	int rem = n%10;
	n=n/10;
	Integer_to_string(n);
	cout<<str[rem]<<" ";
}
int main(){
	int n=102345876;
	Integer_to_string(n);
	return 0;
}