// Bitmasking_unique-no-3.cpp
#include<iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int b[10000]={0};
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		int j=0; 
		while(no>0){
			if(no&1){
				b[j]+=1;
			}
			j++;
			no=no>>1;
		}
	}
	int ans=0;
	int p=1;
	for(int i=0;i<64;i++){
		ans+=(b[i]%3)*p;
		p=p*2;
	}
	cout<<ans<<endl;
	return 0;
}