public class Char_Append_Subsequence {
    public static void main(String[] args) {
        String s = "zbc";
        String t = "abc";
        int res = subseq(s, t);
        System.out.println(res);

    }

    private static int subseq(String s, String t) {

        int j = 0;
        int i = 0;
        while (i < s.length() && j < t.length()) {
            if (s.charAt(i) == t.charAt(j)) {
                j++;
            }
            i++;
        }
        return t.length() - j;

    }

}
