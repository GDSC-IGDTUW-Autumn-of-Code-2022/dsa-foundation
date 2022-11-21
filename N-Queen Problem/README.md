# N-Queen Problem
You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board.<br>
A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.
Note: Don't print anything if there isn't any valid configuration.

## Approach - Backtracking Algorithm 
<br>* The idea is to place queens one by one in different columns, starting from the leftmost column. 
<br>* When we place a queen in a column, we check for clashes with already placed queens. 
<br>* In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution. 
<br>* If we do not find such a row due to clashes, then we backtrack and return false.
<br>* Upon reaching the last row if we are able to place queen in last row with no clash then we have got a possible solution.Print the solution.

## Example -
**Input =**  4
<br>**Output**
#### possible solution
0 1 0 0 
<br>0 0 0 1 
<br>1 0 0 0 
<br>0 0 1 0 
#### possible solution
0 0 1 0 
<br>1 0 0 0 
<br>0 0 0 1 
<br>0 1 0 0 
##### (Note - '1' represents the position where queen is placed)

## Time & Space Complexity
* Time Complexity: O(N!)<br>
* Auxiliary Space: O(N2)
