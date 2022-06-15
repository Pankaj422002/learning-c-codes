// Recur_diving_Occurence_lecture.cpp
#include <iostream>
using namespace std;
/*
int first_Occurence(int a[],int n,int key){
	if(n==0)
		return -1;
	if(a[0]==key)
		return 0;

	int i = first_Occurence(a+1,n-1,key);
	if(i==(-1))
		return -1;
	else
		return i+1;
}
*/
/*
int last_Occurence(int *a,int n,int i,int key){
	//base case
	if(i==n)
		return -1;

	//recursive case
	if(a[i]==key){
		int bi=last_Occurence(a,n,i+1,key);
		if(bi==(-1)){
			return i;
		}else{
			return bi;
		}
	}
	
	int j = last_Occurence(a,n,i+1,key);
	return j;
}
*/
void all_occurence(int *a,int n,int i,int key){
	if(i==n)
		return ;
	if(a[i]==key)
		cout<<i<<" ";
	all_occurence(a,n,i+1,key);
}

int main(){
	int a[]={1,3,4,5,3,5,4,7};
	int n = sizeof(a)/sizeof(int);
	int key = 7;
	// int i=first_Occurence(a,n,key);
/*	int i = last_Occurence(a,n,0,key);
	if(i==-1)
		cout<<"not found"<<endl;
	else 
		cout<<" i = "<<i<<endl;
*/
	all_occurence(a,n,0,key);

	return 0;
}