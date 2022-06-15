// DS_LAB_Q1.cpp
/*1. Write a program in C/C++ to perform the multiplication of 2 matrix 
	 which takes input from the user and do the necessary checking 
	 like number of column of 1st matrix= number of rows of 2nd matrix 
*/

#include <iostream>
using namespace std;

void multiply(int a[][100], int arow, int acol, int b[][100], int brow, int bcol, int result[][100]){
	for(int i=0;i<arow;i++){
		for(int j=0;j<bcol;j++){
			int sum=0;
			for(int k=0;k<brow;k++){
				sum+=a[i][k]*b[k][j];		
			}
			result[i][j]=sum;
		}										
	}
}
					
int main(){	
	int arow,acol;

	cout<<"enter the rows and column of first matrix: ";
	cin>>arow>>acol;

	int a[100][100];
	cout<<"\n enter the elements of 1st matrix: ";
	for(int i=0;i<arow;i++){
		for(int j=0;j<acol;j++){
			cin>>a[i][j];
		}
	}

	int brow, bcol;
	int result[100][100];

	cout<< "\n enter the rows and columns of 2nd matrix: ";
	cin>>brow>>bcol;

	if(acol!=brow){
			cout<<"Sorry!! multiplication is not possible!! ";
		}
	else{
			int b[100][100];
			cout<<"\n enter the elements of 2nd matrix: ";
			for(int i=0;i<brow;i++){
				for(int j=0;j<bcol;j++){
					cin>>b[i][j];
				}
			}
		
			multiply(a,arow,acol,b,brow,bcol,result);

			cout<< "\n array after multiplication is: \n";
			for(int i=0;i<arow;i++){
				for(int j=0;j<bcol;j++){
					cout<<"  "<<result[i][j];
				}
				cout<<"\n";
			}

	}

	return 0;
}