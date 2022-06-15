// recursion_0-1-knapsack.cpp
#include <iostream>
using namespace std;
int knapsack(int wt[],int price[],int n,int i,int total_wt){

	//base case :
	if(i==n)
		return 0;

	//recursive case :
	//coinsider current item: 
	int profit1=0;
	int profit2=0;

	if(wt[i]<=total_wt){
		profit1=price[i];
		profit1+=knapsack(wt,price,n,i+1,total_wt - wt[i]);
	}

	//not considering current item: 
	profit2= knapsack(wt,price,n,i+1,total_wt);

	int ans = max(profit2,profit1);

	return ans;

}
int main(int argc, char const *argv[])
{
	int n=4;
	int wt[]={1,2,3,5};
	int price[]={40,20,35,100};
	int total_wt=7; 
	cout<<knapsack(wt,price,n,0,total_wt)<<endl;

	return 0;
}
