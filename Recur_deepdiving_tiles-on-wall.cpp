// Recur_deepdiving_tiles-on-wall.cpp
#include <iostream>
using namespace std;
int calculate_tile(int n){
	if(n<=3){
		return 1; 
	}
	return calculate_tile(n-1)+calculate_tile(n-4);
}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	cout<<calculate_tile(n)<<endl;
	return 0;
}