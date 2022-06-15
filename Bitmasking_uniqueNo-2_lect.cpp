// Bitmasking_uniqueNo-2_lect.cpp
#include<iostream>
using namespace std;
int main(){
	int a[]={6,1,2,1,6,4};
	int n= sizeof(a)/sizeof(int);
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^a[i];
	}
	int result=ans;
	int pos=0;
	while(ans>0){
		if((ans&1)==1){
			break;
		}
		pos+=1;
		ans=ans>>1;
	}
	int un1=0;
	int mask=1<<pos;
	for(int i=0;i<n;i++){
		if((mask&a[i])==0){
			un1=un1^a[i];
		}
	}
	cout<<"first unique no. is : "<< un1<<endl;
	int un2=un1^result;
	cout<<"second unique no. is : "<< un2<<endl;
	return 0;
}