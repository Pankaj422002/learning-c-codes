// recursion_merge-sort.cpp
#include<iostream>
using namespace std;
void merge(int a[],int s,int e){
    int temp[1000];
    int mid= (s+e)/2;
    int i=s,j=mid+1,k=0;
    while(i<=mid and j<=e){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;i++;
        }
        else if(a[j]<a[i]){
            temp[k]=a[j];
            k++;j++;
        }
    }
    while(j<=e){
        temp[k]=a[j];
        k++;j++;
    }
    while(i<=mid){
        temp[k]=a[i];
        k++;i++;
    }
    int l=0; 
    for(int i=s;i<=e;i++){
        a[i]=temp[l];
        l++;
    }
}

void mergesort(int a[],int s,int e){
    //base case: 
    if(s>=e)
        return;


    //recursive case : 
    int mid = (s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    merge(a,s,e);

}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}