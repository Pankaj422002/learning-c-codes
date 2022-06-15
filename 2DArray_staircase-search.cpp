// 2DArray_staircase-search.cpp

//note: for staircase search given array must be sorted
#include<iostream>
using namespace std;
//1. generic way to search a key
void simple_search(int a[][100],int row, int col, int key){
	bool found=false;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(key==a[i][j]){
				cout<<"key found in simple_search() at "<<i<<", "<<j<<endl;
				found=true;
			}
		}
	}
	if(found==false){
		cout<<"key not found in simple_search()"<<endl;
	}
}
//2. most efficient way to search a key in "sorted array"
void staircase(int a[][100],int row,int col, int key){
	int i=0,j=(col-1);
	bool found=false; 
	while(i<=row && j>=0){
		if(a[i][j]==key){
			cout<<"key found at index "<<i<<" , "<<j<<endl;
			found=true;
			break;
		}
		else  if(a[i][j]>key){
			j--;
		}
		else if (a[i][j]<key){
			i++;
		}
	}
	if(found==false){
		cout<<"element not found!!"<<endl;
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int row,col;cin>>row>>col;
	int a[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<"our array is : "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int key ;cin>>key;
	staircase(a,row,col,key);
	// simple_search(a,row,col,key);
	return 0;
}