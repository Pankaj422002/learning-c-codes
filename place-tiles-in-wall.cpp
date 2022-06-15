// place-tiles-in-wall.cpp
#include<iostream>
using namespace std;
int no_of_bricks(int n){
	if(n<=3)
		return 1;

	return no_of_bricks(n-1) + no_of_bricks(n-4);
}
int main(){
	int n=6;
	cout<<"dimensions of bricks are : 4*"<<n<<endl;
	cout<< no_of_bricks(n);
	return 0;
}