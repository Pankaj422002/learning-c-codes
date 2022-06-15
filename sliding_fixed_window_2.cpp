// sliding_fixed_window_2.cpp
//print first negative no. from all window of size k.
// #include <iostream>
// #include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> Bruteforce_printnegativeno(int n,int a[],int k){
    vector<int> v;
    for(int i=0;i<=(n-k);i++){
        for(int j=i;j<(i+k);j++){
            if(a[j]<0){
                v.push_back(a[j]);
                break;
            }
            if(j==(i+k-1)){
                v.push_back(0);
            }
        }
    }

    return v;
}
vector<int> printnegativeno(int n,int a[],int k){
    int i=0,j=0;
    vector<int> v;
    list<int> l;
    while(j<n){
        //calculation to avoid repeative work : *{j}
        if(a[j]<0){
            l.push_back(a[j]);
        }

        //if not hit window the inc. j simply
        if((j-i+1) < k)
            j++;

        //if hits the window
        //1. ans  <== calculation
        //2. slide the window
        else if((j-i+1)==k){
            // ans <==calculation 
            if(l.size()==0)
                v.push_back(0);
            else{
                // cout<<l.front()<<endl;
                v.push_back(l.front());
            }

            // slide the window => a) i=>remove
                                // b) maintain the window
            if(a[i]==l.front())
                l.pop_front();

            i++;j++;
        }


    }
    
    return v;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;cin>>k;
    vector<int> v2;
    // v2 = Bruteforce_printnegativeno(n,arr,k);
    v2 = printnegativeno(n,arr,k);
    for(auto i = v2.begin(); i < v2.end(); i++)
        cout<<(*i)<<",";
    cout<<endl;
    return 0;
}