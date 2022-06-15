// recursion_optimal-game-stategi.cpp
#include<iostream>
using namespace std;
int optimal_Game_recursion(int a[],int n,int i,int j){
    //base case ;
    if(i>j){
        return 0;
    }

    //recursive case: 

    //piyush chooses the first element: 
    int first_choose = a[i]+ min(optimal_Game_recursion(a,n,i+2,j),optimal_Game_recursion(a,n,i+1,j-1));
    int last_choose = a[j]+ min(optimal_Game_recursion(a,n,i+1,j-1),optimal_Game_recursion(a,n,i,j-2));

    int ans = max(first_choose,last_choose);

    return ans;

}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<optimal_Game_recursion(a,n,0,n-1)<<endl;
    return 0;
}