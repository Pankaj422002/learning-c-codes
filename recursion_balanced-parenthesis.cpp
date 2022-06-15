// recursion_balanced-parenthesis.cpp
#include<iostream>
using namespace std;
void generate_paranthesis(int n,char out[],int i,int open,int close){
	//base case :
	if(open==n and close==n){
		out[i]='\0';
		cout<<out<<endl;
		return;
	}


	//recursive case: 
	if(open<n or i==0){
		out[i]='(';
		generate_paranthesis(n,out,i+1,open+1,close);
	}

	if(close<open and close<n){
		out[i]=')';
		generate_paranthesis(n,out,i+1,open,close+1);
	}


}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	char out[1000]; 
	generate_paranthesis(n,out,0,0,0);
	return 0;
}