// 2dArray_wave_printing.cpp
#include<iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	int r,c;cin>>r>>c;
	int a[100][100];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	cout<<"your array is : "<<endl;
	for(int i =0 ;i<r;i++){
		for(int j=0;j<c;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"array after wave printing : "<<endl;
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			if(i%2==0)
				cout<<a[j][i]<<" ";
			
			else
				cout<<a[r-1-j][i]<<" ";
			
		}
		cout<<endl;
	}
	// another method 
/*	for(int i=0;i<c;i++){
		if(i%2==0){
			for(int j=0;j<r;j++){
				cout<<a[j][i]<<" " ;
			}
		}
		else{
			for(int j=r-1;j>=0;j--){
				cout<<a[j][i]<<" " ;
			}
		}
		cout<<endl;
	}
*/
	return 0;
}