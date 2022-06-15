// recursion_NQueen-problem.cpp
#include<iostream>
using namespace std;
void print(int chess_board[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess_board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool ispossible(int chess_board[][100],int n,int i,int j){
    //column: 
    int row=i,col=j;
    for(;row>=0;row--){
        if(chess_board[row][col]){
            return false;
        }
    }


    //right diagonal 
    row=i;col=j;
    while(row>=0 and col<n){
        
        if(chess_board[row][col]){
            return false;
        }

        row--;
        col++; 
    }


    //left diagonal 
    row=i;col=j;
    while(row>=0 and col>=0){
        
        if(chess_board[row][col]){
            return false;
        }

        row--;
        col--;
    }

    return true;
}

bool N_Queen(int chess_board[][100],int n,int curr_row){
    //base case: 
    if(curr_row>=n){
        print(chess_board,n); 
        return true;
    }

    //recursive case:
    for(int j=0;j<n;j++){
        if(ispossible(chess_board,n,curr_row,j)){ 
            chess_board[curr_row][j]=1;
            bool var = N_Queen(chess_board,n,curr_row+1);
            if(var==true){
                return true;
            }else{
                chess_board[curr_row][j]=0;
            }
        }
    }
    return false;
}

int main()
{
    freopen("input.txt","r",stdin);
    int n;cin>>n;
    int chess_board[100][100]={0};
    cout<< N_Queen(chess_board,n,0) <<endl;
    return 0;
}