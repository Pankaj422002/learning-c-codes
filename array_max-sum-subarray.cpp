// array_max-sum-subarray.cpp
#include<iostream>
#include<climits>
using namespace std;
//0. printing all subarray
void printsubarray(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}
//1. max_sum_subarray general approach
void maxsumsubarray_1(int a[],int n){
	int max_sum = INT_MIN; 
	int wi,wj; 
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=a[k];
			}
			if(max_sum<sum){
				max_sum=sum;
				wi=i;
				wj=j; 
			}
		}
	}
	cout<<"max sum is : " <<max_sum<<endl;
	cout<<"max sum subarray is : ";
	for(int i=wi;i<=wj;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//2. optimize approach of max_sum_subarray
void maxsumsubarray_2(int a[],int n){
	int max_sum = INT_MIN;
	int csum[1000]={0};
	int wi,wj;
	csum[0]=a[0];
	for(int i=1;i<n;i++){
		csum[i]=csum[i-1]+a[i];
	}

	//printing cummulative sum array 
	cout<<endl<<"cummulation array is: " ;
	for(int i=0;i<n;i++)
	cout<<csum[i]<<" ";
	cout<<endl;


	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			if(i==0){
				sum=csum[j];
			}else{
				sum=csum[j]-csum[i-1];
			}			
			if(max_sum<sum){
				max_sum=sum;
				wi=i;
				wj=j;
			}
		}
	}
	cout<<"max sum is : " <<max_sum<<endl;
	cout<<"max sum subarray is : ";
	for(int i=wi;i<=wj;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int a[]={4,1,2,3,4};
	int n= sizeof(a)/sizeof(int);
	printsubarray(a,n);
	maxsumsubarray_1(a,n);
	maxsumsubarray_2(a,n);
	return 0;
}