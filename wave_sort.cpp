// wave_sort.cpp
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void quicksort(int a[],int s,int e){
    //base case :
    if(s>=e){
        return;
    }
    //recursive case : 

    int pivot = a[e];
    int pi=s;
    for(int i=s;i<e;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pi]);
            pi++;
        }
    }
    swap(a[e],a[pi]);

    quicksort(a,s,pi-1);
    quicksort(a,pi+1,e);

}

int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i+=2){
        //prev: 
        if(i!=0 and a[i]<a[i-1])
            swap(a[i],a[i-1]);

        //next: 
        if(i!=(n-1) and a[i]<a[i+1])
            swap(a[i],a[i+1]);

    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}