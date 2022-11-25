I have solved this issue for a square matrix

One method to rotate the matrix would be to first swap the ith and (n-1-i)th rows of the matrix and then to take its transpose

First I have declared two functions : one to swap the rows of the matrix and the other to find out the transpose (interchanging the
 [i][j] element with [j][i] element of the matrix)
 
In the int main function, the user is asked to give the size of the matrix as the input and then to enter the values of that matrix
After doing the above step, you will receive the desired output (rotated matrix)