public class Sudoku_solver {
    public static void main(String[] args) {
        int[][] board = new int[][] {
                { 8, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 3, 6, 0, 0, 0, 0, 0 },
                { 0, 7, 0, 0, 9, 0, 2, 0, 0 },
                { 0, 5, 0, 0, 0, 7, 0, 0, 0 },
                { 0, 0, 0, 0, 4, 5, 7, 0, 0 },
                { 0, 0, 0, 1, 0, 0, 0, 3, 0 },
                { 0, 0, 1, 0, 0, 0, 0, 6, 8 },
                { 0, 0, 8, 5, 0, 0, 0, 1, 0 },
                { 0, 9, 0, 0, 0, 0, 4, 0, 0 }
        };
        if (solve(board)) {
            display(board);
        } else {
            System.out.println("can't be solved");
        }
    }

    public static boolean solve(int[][] board) {
        int n = board.length;
        int row = -1;
        int col = -1;
        boolean emptyLeft = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 0) {
                    row = i;
                    col = j;
                    emptyLeft = false;
                    break;

                }
            }
            // if we found some empty element in row, ten break
            if (emptyLeft == false) {
                break;
            }
        }
        if (emptyLeft == true) {

            return true;
            // sudoku solved
        }
        // bacltrack
        for (int numbers = 1; numbers <= 9; numbers++) {
            if (isSafe(board, row, col, numbers)) {
                board[row][col] = numbers;
                if (solve(board)) {
                    return true;
                } else {
                    board[row][col] = 0;

                }
            }
        }
        return false;
    }

    private static void display(int[][] board) {
        for (int[] row : board) {
            for (int num : row) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }

    public static boolean isSafe(int[][] board, int row, int col, int num) {
        for (int i = 0; i < board.length; i++) {
            // check if the number is in the row
            if (board[row][i] == num) {
                return false;
            }
        }
        // check the col
        for (int[] nums : board) {
            // check if the number is in the col
            if (nums[col] == num) {
                return false;
            }

        }
        int sqrt = (int) (Math.sqrt(board.length));
        int start = row - row % sqrt;
        int end = col - col % sqrt;
        for (int r = start; r < start + sqrt; r++) {
            for (int c = end; c < end + sqrt; c++) {
                if (board[r][c] == num) {
                    return false;
                }
            }
        }
        return true;

    }

}
