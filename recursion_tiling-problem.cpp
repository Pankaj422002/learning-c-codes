// recursion_tiling-problem.cpp
#include<iostream>
using namespace std ;
int tile(int n){
	//base case :
	if(n<=3){
		return 1;
	}

	//recursive case :
	//1. place tile vertically: 
	int x= tile(n-1);

	//2. place tile horizontally  :
	int y = tile(n-4);

	return x+y;

}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	cout<<tile(n)<<endl;
	return 0;
}