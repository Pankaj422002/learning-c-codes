// 2dArray_spiralPrint.cpp
#include<iostream>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
	int row,col;
	cin>>row>>col;
	int sr=0,er=row-1,sc=0,ec=col-1;
	int a[100][100];
	int val=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			a[i][j]=val;
			val+=1;
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n array after spiral printing is : \n";

	while(sr<=er && sc<=ec){
		for(int i=sc;i<=ec;i++)
			cout<<a[sr][i]<<" " ;
		sr++;

		for(int i=sr;i<=er;i++)
			cout<<a[i][ec]<<" " ;
		ec--;

		if(sr<=er){
			for(int i=ec;i>=sc;i--)
				cout<<a[er][i]<<" " ;
			er--;
		}

		if(sc<=ec){
			for(int i=er;i>=sr;i--)
				cout<<a[i][sc]<<" " ;
			sc++;
		}
	}
	return 0;
}