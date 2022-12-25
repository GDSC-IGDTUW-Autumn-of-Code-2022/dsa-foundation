import java.nio.ReadOnlyBufferException;

public class Word_Search {
    public static void main(String[] args) {
        char[][] board = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
        boolean[][] arr = new boolean[board.length][board[0].length];
        boolean b = wordSearch(board, "ABCCEfD");
        System.out.println(b);

    }

    public static boolean wordSearch(char[][] board, String word) {
        if (board == null || board.length == 0 || board[0].length == 0 || word == null || word.equals("")) {
            return false;
        }
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                if (search(board, word, i, j, 0) == true) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean search(char[][] board, String word, int i, int j, int count) {
        if (count == word.length()) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.length || j >= board[0].length || board[i][j] != word.charAt(count)) {
            return false;
        }
        board[i][j] = '#';
        boolean result = search(board, word, i - 1, j, count + 1) || search(board, word, i, j - 1, count + 1)
                || search(board, word, i + 1, j, count + 1) || search(board, word, i, j + 1, count + 1);
        board[i][j] = word.charAt(count);
        return result;

    }

}
