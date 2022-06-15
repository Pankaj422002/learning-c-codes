// recursion_friend_pair.cpp
#include<iostream>
using namespace std;
int f(int n){
    //base case: 
    if(n==0 or n==1)
        return 1;


    //recursive  case: 
    int x = f(n-1);
    int y = f(n-2)*(n-1);

    return x+y;

}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;

    cout<<f(n)<<endl;

    return 0;
}