
#include <iostream>

using namespace std;

void** Swaprows(int **matrix, int size){
    int i,j;
    for(i=0;i<size/2;i++){
        for(j=0;j<size;j++){
           swap(matrix[i][j],matrix[size-i-1][j]);
          
        }
    }
}

void** Transpose(int **matrix,int size){
    Swaprows(matrix,size);
    int i,j;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
    swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i=0;i<size;i++)
		{
		//	input[i] = new int[size];
			for (int j = 0; j < size; j++)
			{
				cout<<matrix[i][j];}
        }
}



int main()
{   int row, col,size;
	
        cin>>size;
        
		int **input= new int *[size];
		
		 for (int i=0;i<size;i++)
		{
			input[i] = new int[size];
			for (int j = 0; j < size; j++)
			{
				cin >> input[i][j];
			}
		}
  
    Transpose(input,size);

    return 0;
}