public class Balanced_Parenthesis {
    public static void main(String[] args) {
        String parenthesis = "}}}";
        int result = balanced_Parenthesis(parenthesis);
        System.out.println(result);

    }

    public static int balanced_Parenthesis(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '{' || s.charAt(i) == '}') {
                count++;
            }

        }
        return count;

    }

}
