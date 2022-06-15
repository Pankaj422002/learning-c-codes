// recursion_rat-in-maze.cpp
#include<iostream>
using namespace std;
void print(int a[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool rat_in_maze(char maze[][4],int sol[][4],int i,int j,int row,int col){
    //base case: 
    //1. rat can't move outside the maze: 
    if(i==row or j==col){   
        return false;
    }

    //2. if the end is block then return false: 
    if(maze[i][j]=='x')
        return false;

    //3. if the rat reaches to the destination: 
    if(i==row-1 and j==col-1){
        sol[i][j]=1;
        print(sol,row,col);
        cout<<endl;
        return true;
    }


    //recursive case : 
        sol[i][j]=1;
/*  
    // To Print only one solution: 

    if(rat_in_maze(maze,sol,i,j+1,row,col)==true){
        return true;
    }else if(rat_in_maze(maze,sol,i+1,j,row,col)==true){
        return true;
    }else{
        sol[i][j]=0;
        return false;
    }
*/

    //To Print all solution :

    int right_success = rat_in_maze(maze,sol,i,j+1,row,col);
    int left_success= rat_in_maze(maze,sol,i+1,j,row,col);

    // we will reach here only if : 
    //first:  recursion completes itself (and return true;)
    //second: we will not able to move right and left (so return false);

    sol[i][j]=0;

    if(right_success==true or left_success==true){
        return true;
    }
    return false;


}
int main()
{
    int row=4,col=4;
    char maze[4][4]={
        {'0','0','0','0'},
        {'0','0','x','0'},
        {'0','0','0','x'},
        {'0','x','0','0'}
    };

    int sol[4][4]={0};
    cout<<rat_in_maze(maze,sol,0,0,row,col)<<endl;

    return 0;
}