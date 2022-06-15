// DS_LAB_Q2.cpp
/*   1. Write a program in C/C++ to  check whether a given matrix taken 
      from the input is a symmetric is matrix or not
*/
#include <iostream>
using namespace std;
int main(){
	
	int a[100][100];
	int row, col;
	cout<<"\n enter the no. of rows and no. of columns: ";
	cin>>row>>col;

	int flag=0;
	
	if(row!=col){
		cout<<"matrix is not symmetric";
	}
	else{

		cout<<"\n enter the matrix: \n ";

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++)
			cin>>a[i][j];
		}

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){

				if(a[i][j]!=a[j][i]){
					flag=1;
					break;
				}
			}
		}
		if(flag==1){
				cout<<"matrix is not symmetric ";
			}
		else cout<<"matrix is symmetric";

	}
	return 0;

}