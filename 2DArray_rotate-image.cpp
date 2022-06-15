// 2DArray_rotate-image.cpp
#include<iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	int row,col;cin>>row>>col;
	int a[100][100];
	int val=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			a[i][j]=val;
			val+=1;
		}
	}
	cout<<"our array is : "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nreversed array is: "<<endl;
	for(int i=0;i<row;i++){
		int x=0, y= col-1;
		while(x<y){
			swap(a[i][x],a[i][y]);
			x++;y--;
		}
	}
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"transpose of the array : "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(j>=i){
				swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}