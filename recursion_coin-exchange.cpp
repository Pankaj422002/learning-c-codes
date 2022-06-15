// recursion_coin-exchange.cpp
#include<iostream>
using namespace std;
int money_exchange(int coins[],int n,int i,int money){
	//base case: 
	if(money==0)
		return 1;
	if(i==n)
		return 0;

	if(money<0)
		return 0;

	int ans=0;
	//recursive case: 
	money = money-coins[i];
	ans += money_exchange(coins,n,i,money);
	money = money+coins[i];

	ans += money_exchange(coins,n,i+1,money);

	return ans;

}
int main(){
	freopen("input.txt","r",stdin);
	int coins[]={1,2,5};
	int n = sizeof(coins)/sizeof(int);
	int money;cin>>money;
	cout<<money_exchange(coins,n,0,money)<<endl;
	return 0;
}