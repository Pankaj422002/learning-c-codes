// array_find-pair-sum_lecture.cpp
#include <iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum; cin>>sum; 
	int i=0,j=(n-1);
	while(i<j){
		if((arr[i]+arr[j])==sum){
			cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
			i++;j--;
		}
		else if((arr[i]+arr[j])>sum){
			j--;
		}
		else if((arr[i]+arr[j])<sum){
			i++; 
		}
	}
	return 0;
}