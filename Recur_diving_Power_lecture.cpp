// Recur_diving_Power_lecture.cpp
#include<iostream>
using namespace std;
int power(int a,int n){
	//base case
	if(n==0)
		return 1;
	//recursive case
	int smaller=power(a,n-1);

	//finding the solution
	int bigger=a*smaller;
	
	return bigger;
}
int main(){
	int a=2,n=3;
	cout<<power(a,n)<<endl;

	return 0;
}