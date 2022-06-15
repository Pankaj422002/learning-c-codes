// recursion_smart-keypad-advanced.cpp
#include<iostream>
using namespace std;
#include<vector>
bool is_present(string a,string b){

    int i=0;
    for(int j=0;b[j]!='\0';j++){
        if(b[j]==a[i]){
            int k=j;
            while(a[i]!='\0' and b[j]==a[i] and b[j]!='\0'){
                i++;j++;
            }  
            if(a[i]=='\0'){
                return true;
            }else{
                i=0;j=k; 
            }
        }
    }

    return false;
}

string a[] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string searchIn [] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
vector<string> v;

void generate_substrings(string str,int i,char output[],int k){
    //base case : 
    if(str[i]=='\0'){
        output[k]='\0';
        v.push_back(output);
        return;
    }

    //recursive case :
    string x = a[str[i]-'0'];
    for(int j=0;x[j]!='\0';j++){
        output[k]=x[j];
        generate_substrings(str,i+1,output,k+1);
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    string str;cin>>str;
    char output[1000];
    generate_substrings(str,0,output,0);

    //print the present of character in searchIn: 
    for(auto it: v){
        for(int i=0;i<11;i++){
            if(is_present(it,searchIn[i])==true){
                cout<<searchIn[i]<<endl;
            }
        }
    }


    // cout<<is_present(a,b)<<endl;
    return 0;
}