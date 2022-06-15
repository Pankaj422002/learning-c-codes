// array_Maximum_Sum_Path_inTwoArrays.cpp
#include <iostream>
using namespace std;
int max(int sum1, int sum2){
	return (sum1>sum2)?sum1:sum2 ;
}
void maxsumpath_in_twoarray(int a[],int b[],int n,int m){
	int result=0,sum1=0,sum2=0,i=0,j=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			sum1+=a[i++];
		}
		else if(a[i]>b[j]){
			sum2+=b[j++];
		}
		else{
			result+=max(sum1,sum2)+a[i];
			sum1=0;
			sum2=0;
			i++;j++;
		}
	}
	while(i<n){
		sum1+=a[i++];
	}
	while(j<m){
		sum2+=b[j++];
	}
	result+=max(sum1,sum2);
	cout<<result<<endl;
}
int main(){
	int n,m;cin>>n>>m;
	int a[100000], b[100000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	maxsumpath_in_twoarray(a,b,n,m);
	return 0;
}