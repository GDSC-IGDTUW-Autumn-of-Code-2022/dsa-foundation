public class N_Queen {
    public static void main(String[] args) {
        int n = 4;
        boolean[][] boards = new boolean[n][n];
        queens(boards, 0);

    }

    public static int queens(boolean[][] boards, int row) {
        if (row == boards.length) {
            display(boards);
            return 1;
        }
        int count = 0;
        // placing the queen and checking for every row and columnn
        for (int col = 0; col < boards.length; col++) {
            // place the queen if it is safe
            if (isSafe(boards, row, col)) {
                boards[row][col] = true;
                count += queens(boards, row + 1);
                boards[row][col] = false;

            }
        }
        return count;
    }

    private static boolean isSafe(boolean[][] boards, int row, int col) {
        // checking ahead
        for (int i = 0; i < row; i++) {
            if (boards[i][col]) {
                return false;
            }

        }
        // diagonal left
        int maxLeft = Math.min(row, col);
        for (int i = 1; i <= maxLeft; i++) {
            if (boards[row - i][col - i]) {
                return false;
            }
        }
        // diagonal right
        int maxRight = Math.min(row, boards.length - col - 1);
        for (int i = 1; i <= maxRight; i++) {
            if (boards[row - i][col + i]) {
                return false;
            }
        }
        return true;
    }

    private static void display(boolean[][] boards) {
        for (boolean[] row : boards) {
            for (boolean element : row) {
                if (element) {
                    System.out.print("1");
                } else {
                    System.out.print("0");
                }
            }
            System.out.println();
        }
        System.out.println();
    }

}
