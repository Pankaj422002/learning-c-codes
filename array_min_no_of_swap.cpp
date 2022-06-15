// array_min_no_of_swap.cpp
#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int swapped=0;
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
           swap(a[min],a[i]);  
           swapped+=1; 
        }  
    }
    cout<<swapped<<endl;
    return 0;
}
