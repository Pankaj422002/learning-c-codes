// algorithm_STL_money-exhange.cpp
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
	return a<=b;
}
int main(){

	int coins[]={1,2,10,20,40,40,40,50,100};
	int n = sizeof(coins)/sizeof(int);

	int money=120;
	// cin>>money;
	while(money>0){
		int index = lower_bound(coins,coins+n,money,compare)-coins-1;
		cout<<"exchanges : "<<coins[index]<<endl;
		money -= coins[index];
	}
	return 0;
}