// recursion_tower-of-hanoi.cpp
#include<iostream>
using namespace std;
void tower_of_hanoi(int n,char src, char helper,char dest){

    //base case : 
    if(n==0)
        return;

    //recursive call: 
    tower_of_hanoi(n-1,src,dest,helper);

    cout<<"move "<<n<<"from "<<src<<"to "<<dest<<endl;

    tower_of_hanoi(n-1,helper,src,dest);

}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}