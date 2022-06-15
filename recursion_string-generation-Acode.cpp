// recursion_string-generation-Acode.cpp
#include<iostream>
using namespace std;
void generate_substrings(string str,int n,int i,char output[],int k){
    //base case :
    if(str[i]=='\0'){
        output[k]='\0';
        cout<<output<<", ";
        return;
    }

    //recursive case :
    //take the ith element alone : 
    int digit = str[i]-'0'; 
    output[k]= digit + 'A' -1; 

    generate_substrings(str,n,i+1,output,k+1);


    //take ith element with some other: 

    if(i<(n-1)){      //to ensure that for last elment of str we would not calculate x2
        int x1=str[i]-'0';
        int x2=str[i+1]-'0';
        int x=((x1*10) + x2);

        if(x<=26){
            output[k] = x + 'A' - 1;  
            generate_substrings(str,n,i+2,output,k+1);     
        }
    }


}

int main(){
    freopen("input.txt","r",stdin);
    string str;cin>>str;
    char output[100];
    int n=str.length(); 
    generate_substrings(str,n,0,output,0);
    cout<<endl;
    return 0;
}