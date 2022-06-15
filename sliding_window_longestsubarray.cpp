// sliding_window_longestsubarray.cpp
//find the longest subarray who's sum is k(given).
#include<iostream>
#include<climits>
using namespace std;
int longest_subarray(int n,int a[],int k){
    int i=0,j=0;
    int sum=0,ans=INT_MIN;
    while(j<n){
        //calculation to avoid repetition 
        sum+=a[j];

        // increase j until it not hit the condition
        if(sum<k)
            j++;
        else if(sum == k){      // hit the condition
            //ans <== calculation
            ans = max(ans,(j-i+1));

            //inc the window size;
            j++;
        }
        else if(sum>k){
            while(sum>k){
                //shrink the window
                sum = sum - a[i];
                i++;
            }
            j++;
        }
    }

    return ans;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;cin>>k;
    cout<<longest_subarray(n,a,k)<<endl;
    return 0;
}