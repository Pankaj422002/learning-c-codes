// recursion_permute.cpp
#include<iostream>
using namespace std;
void permutation(string str,int i){

    //base case :
    if(str[i]=='\0'){
        cout<<str<<", ";
        return;
    }

    //recursive case :

    for(int j=i;str[j]!='\0';j++){
        swap(str[i],str[j]);
        permutation(str,i+1);
        
        //backtracking : 
        swap(str[i],str[j]);
    }

}
int main(int argc, char const *argv[])
{
    freopen("input.txt","r",stdin);
    string str;cin>>str;
    permutation(str,0);
    return 0;
}