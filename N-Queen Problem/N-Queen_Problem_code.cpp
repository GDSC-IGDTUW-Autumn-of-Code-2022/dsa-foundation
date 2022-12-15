#include <bits/stdc++.h>
using namespace std;

int matrix[11][11];

bool isPossible(int n, int row, int col)
{
    //This fuction will check if it is possible to place a queen at the given location

    // Same Column- checks if there is a queen in the same column
    for (int i = row - 1; i >= 0; i--)
    {
        if (matrix[i][col] == 1)
        {
            return false;
        }
    }
    // Upper Left Diagonal - checks if there is a queen in upper left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (matrix[i][j] == 1)
        {
            return false;
        }
    }

    // Upper Right Diagonal - checks if there is a queen in upper right diagonal

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (matrix[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void nqueenhelper(int n, int row)
{
    if (row == n)
    {
        // this if condition will be executed if we arrive at a possible solution
        cout <<"\n# possible solution :\n "<< endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout<<endl;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isPossible(n, row, i))
        {
            matrix[row][i] = 1;
            nqueenhelper(n, row + 1);
            matrix[row][i] = 0;
        }
    }
    return;
}


int main()
{
    int n;
    cout<<"enter value of N : ";
    cin >> n;
//Memset() is a C++ function. It copies a single character for a specified number of times to an object.
    memset(matrix, 0, 11 * 11 * sizeof(int)); 
    nqueenhelper(n, 0);
    return 0;
}
