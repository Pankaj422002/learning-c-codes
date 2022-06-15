// recursion_sudoko.cpp
#include<iostream>
using namespace std;
void print(int a[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool ispossible(int a[][9],int i,int j,int key){
    // column check  :
    int col=j;
    for(int row=0;row<=8;row++){
        if(a[row][col]==key ){ //and row!=i
            return false;
        }
    }


    //row Check: 
    int row= i ;
    for(col=0;col<=8;col++){
        if(a[row][col]==key ){ //and col!=j
            return false;
        }
    }

    // cout<<row << " " << col <<endl;
    //Box check :  
    int si= (i- (i%3));
    int sj= (j- (j%3));
    // cout<<row<<" "<<col<<endl;
    row = si;
    for(int x=si;x<si+3;x++){
        for(int y=sj;y<sj+3;y++){
            if(a[x][y]==key){
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(int a[][9],int i,int j){
	//base case :
	if(j==9){
		return sudokuSolver(a,i+1,0);
	}
	if(i==9){
		print(a);
		return true;
	}
	if(a[i][j]!=0){
		return sudokuSolver(a,i,j+1);
	}

	//recursive case: 
	for(int l=1;l<=9;l++){
		if(ispossible(a,i,j,l)){
			a[i][j]=l;
			int var = sudokuSolver(a,i,j+1);
			if(var){
				return true;
			}
			a[i][j]=0;
		}
	}

	return false;

}
int main()
{
	int a[9][9]={
				 {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
                 {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
                 {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
                 {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
                 {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
                 {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
                 {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
                 {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
                 {0, 0, 5, 2, 0, 6, 3, 0, 0} 
	};
	cout<< sudokuSolver(a,0,0) <<endl ;
	return 0;
}