// recursion_duplicate-formatting.cpp
#include<iostream>
using namespace std;
void format_duplicate(char str[],int i){
    //base case: 
    if(str[i]=='\0'){
        // cout<<i<<endl;
        cout<<str<<endl;
        return;
    }

    //recursive case: 
    if(str[i]==str[i+1]){

        int j=i+1;
        while(str[j]!='\0')
            j++;
        while(j>=(i+1)){
            str[j+1]=str[j]; 
            j-=1;
        }

        str[i+1]= '*';

        format_duplicate(str,i+2);


    }else{
        format_duplicate(str,i+1);
    }


}
int main(int argc, char const *argv[])
{
    freopen("input.txt","r",stdin);
    char str[100];cin>>str;
    format_duplicate(str,0);
    return 0;
}