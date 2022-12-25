#include<bits/stdc++.h>
using namespace std;

bool ch(int sudoku[9][9],int row,int col,int n)
{
    for(int i=0;i<9;i++)
    {
        if(sudoku[row][i]==n)
        {
            return false;
        }
    }
    return true;
}

bool cv(int sudoku[9][9],int row,int col,int n)
{
    for(int i=0;i<9;i++)
    {
        if(sudoku[i][col]==n)
        {
            return false;
        }
    }
    return true;
}
bool cb(int sudoku[9][9],int row,int col,int n)
{
    int x=row-(row%3);
    int y=col-(col%3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(n==sudoku[x+i][y+j])
            {
                return false;
            }
        }
    }
    return true;

}

bool sudokuSolver(int sudoku[9][9])
{
    bool isEmpty=false;
    int row=0,col=0;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sudoku[i][j]==0)
            {
                isEmpty=true;
                row=i;
                col=j;
                break;
            }
        }
        if(isEmpty)
        {
            break;
        }
    }
    if(!isEmpty)
    {
        return true;
    }
    for(int i=1;i<=9;i++)
    {
        if(ch(sudoku,row,col,i)&&cv(sudoku,row,col,i)&& cb(sudoku,row,col,i))
        {
            sudoku[row][col]=i;
            if(sudokuSolver(sudoku))
            {
                return true;
            }
            sudoku[row][col]=0;
        }
    }
    return false;

}

int main(){
    int sudoku[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>sudoku[i][j];
        }
    }
    bool ans=sudokuSolver(sudoku);
    if(ans)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}


