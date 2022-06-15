// string_sort_stringtokeniser.cpp
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int StringToInt(string s3){
    int ans=0,inc=1;
    int n= s3.length();
    for(int i=(n-1);i>=0;i--){
        ans += (s3[i] - '0')*inc;
        inc *= 10;
    }
    return ans;
}
string abstract_token(string s1, int key){
    char *ptr = strtok((char *)s1.c_str()," ");

    while(key>1){
        ptr = strtok(NULL," ");
        key--;
    }
    return ptr;
}
bool numerical_compare(pair<string,string> p1, pair<string,string> p2){
    return StringToInt(p1.second) < StringToInt(p2.second);
}
bool lecographic_compare(pair<string,string>p1, pair<string,string>p2){
    return p1.second < p2.second;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    string s[100];
    cin.get();
    for(int i=0;i<n;i++)
        getline(cin,s[i]);
    int key;cin>>key;
    string reverse,sorting;
    cin>>reverse>>sorting;

    pair<string,string> p[100];
    for(int i=0;i<n;i++){
        p[i].first = s[i];
        p[i].second = abstract_token(s[i],key);
    }

    if(sorting == "numerical"){
        sort(p,p+n,numerical_compare);
    }
    else if(sorting == "lexicographic"){
        sort(p,p+n,lecographic_compare);
    }

    if(reverse == "true"){
        for(int i=(n-1);i>=0;i--){
            cout<<p[i].first<<endl;
        }
    }else if(reverse == "false"){
        for(int i=0;i<n;i++){
            cout<<p[i].first<<endl;
        }
    }

    return 0;
}