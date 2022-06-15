// recursion_counting-sort.cpp
#include<iostream>
using namespace std;

void counting_sort(int a[],int n){

    int freq[100]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++; 
    }
    int j=0; 
    for(int i=0;i<100;i++){
        while(freq[i]>0){
            a[j]=i;
            j+=1; freq[i]-=1;
        }
    }


}

int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];

    counting_sort(a,n);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}