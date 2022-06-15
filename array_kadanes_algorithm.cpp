// array_kadanes_algorithm.cpp
#include <iostream>
using namespace std;
//1. kadanes algorithm 
void kadaneAlgo(int a[],int n){
	int curr_sum=0,max=0;
	for(int i=0;i<n;i++){
		curr_sum+=a[i];
		if(curr_sum<0){
			curr_sum=0;
		}
		if(max<curr_sum){
			max=curr_sum;
		}
	}
	cout<<max<<endl;
}
//1(b). printing max sum subarray using kadanes algorithm
void printkadaneAlgo(int a[],int n){
	int curr_sum=0,max=0;
	int curr_left=0,left=0,right=(-1);
	for(int i=0;i<n;i++){
		curr_sum+=a[i];
		if(curr_sum<0){
			curr_sum=0;
			curr_left=i+1; 
		}
		if(max<curr_sum){
			max=curr_sum;
			left=curr_left;
			right=i; 
		}
	}
	cout<<"max sum subarray is : " << max<<endl;
	cout<<"max subarray is: ";
	for(int i=left;i<=right;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
//1(c). general method of max subarray sum
void maxsumsubarray_1(int a[],int n){
	int max_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=a[k];
			}
			if(max_sum<sum){
				max_sum=sum;  
			}
		}
	}
	cout<<max_sum<<endl;
}
// 3. kadane algorithm in circular array is : 
int max(int opt2,int opt1){
	return (opt2>opt1)?opt2:opt1;
}
void max_cir_Subarray_sum(int a[],int n){
	int curr_sum=0; 
	int opt1=0;
	int opt2=0; 
	int curr_min=0,total=0; 
	for(int i=0;i<n;i++){
		total+=a[i];
	}
	for(int i=0;i<n;i++){
		curr_sum+=a[i];
		if(curr_sum<0){
			curr_sum=0;
		}
		if(opt1<curr_sum){
			opt1=curr_sum;
		}

		curr_min+=a[i];
		if(curr_min>0){
			curr_min=0;
		}
		if(opt2>curr_min){
			opt2=curr_min;
		}

	}
	opt2=total - opt2;
	cout<< max(opt2,opt1);
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"printkadaneAlgo() : "<<endl;
	printkadaneAlgo(a,n);
	cout<<endl<<"maxsumsubarray_1() :"<<endl;
	maxsumsubarray_1(a,n);
	cout<<"max_cir_Subarray_sum() : "<<endl;
	max_cir_Subarray_sum(a,n);
	cout<<endl;
	return 0;
}