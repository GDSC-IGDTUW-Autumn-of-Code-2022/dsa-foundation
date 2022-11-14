// for rotating a square matrix anticlockwise.

import java.util.*;
public class rotateAnti{

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the order: ");
        int n = scn.nextInt();
        int[][] mat = new int[n][n];
        System.out.println("Enter the elements: "); // taking input matrix.
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                mat[i][j] = scn.nextInt();

            }
        }
        rotate(mat); // calling the function to rotate
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                System.out.print(mat[i][j]);

            }
            System.out.println(); // printing the rotated matrix
        }
    }
    // to rotate the matrix anticlockwise first reflect it and then transpose it.
    public static void rotate(int[][] matrix) {
        reflect(matrix);
        transpose(matrix);
    }
    public static void transpose(int[][] matrix){
        int n = matrix.length;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
    public static void reflect(int[][] matrix){
        int n = matrix.length;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n/2; j++){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = tmp;
            }
        }
    }
}

// the time complexity is O(n^2) and no extra space is taken for swapping elements
