public class Balanced_Parenthesis {
    public static void main(String[] args) {
        String parenthesis = "}{";
        int res = balanced_Parenthesis(parenthesis);
        System.out.println(res);

    }

    public static int balanced_Parenthesis(String inputStr) {
        int i, length, j = 0, count = 0;
        int counter = 0;
        char current, ch;
        char[] stack = new char[20];
        length = inputStr.length();
        for (i = 0; i < length; i++) {

            current = inputStr.charAt(i);
            if (current == '(' || current == '{' || current == '[') {
                stack[j] = current;
                j++;
                count = 1;
                counter++;
            } else if (current == ')') {
                if (count == 1) {
                    j--;
                    counter--;
                }
                ch = stack[j];
                if (stack.length == 0 || ch != '(') {
                    counter++;
                }
            } else if (current == '}') {
                if (count == 1) {
                    j--;
                    counter--;
                }
                ch = stack[j];
                if (stack.length == 0 || ch != '{') {
                    counter++;
                }
            } else if (current == ']') {
                if (count == 1) {
                    j--;
                    counter--;
                }
                ch = stack[j];
                if (stack.length == 0 || ch != '[') {
                    counter++;
                }
            }
        }

        return counter;
    }
}