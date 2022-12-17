
public class Search_matrix {
    public static void main(String[] args) {
        int[][] arr = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 } };
        boolean res = searchMatrix(arr, 1, arr.length, arr[0].length);
        System.out.println(res);

    }

    public static boolean searchMatrix(int[][] matrix, int target, int m, int n) {
        // if only one row exist
        int s = 0;
        int end = m - 1;
        int columnMid = (n - 1) / 2;
        boolean a = true;
        if (m == 1) {
            a = search_column(matrix, target, 0, n - 1, s);
            return a;

        }
        if (n == 1) {
            int st = 0;
            int e = m - 1;
            while (st <= e) {
                int mid = st + (e - st) / 2;
                if (matrix[mid][0] == target) {
                    System.out.println(mid + " " + 0);
                    return true;
                } else if (matrix[mid][0] < target) {
                    st = mid + 1;
                } else {
                    e = mid - 1;
                }

            }
            return false;

        }
        while (s <= end && s <= (m - 1) && s >= 0) {
            int mid = s + (end - s) / 2;
            if (matrix[mid][columnMid] == target) {
                System.out.println(mid + " " + columnMid);
                return true;
            } else if (matrix[mid][columnMid] < target) {
                s = mid + 1;
                a = search_column(matrix, target, 0, n - 1, mid);
                if (a) {
                    return a;
                }

            } else {
                end = mid - 1;
                a = search_column(matrix, target, 0, n - 1, mid);
                if (a) {
                    return a;
                }

            }
        }
        return false;
    }

    public static boolean search_column(int[][] arr, int target, int start, int end, int row) {
        while (start <= end && start >= 0) {
            int mid = start + (end - start) / 2;
            if (arr[row][mid] == target) {
                System.out.println(row + " " + mid);
                return true;
            } else if (arr[row][mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }

}
