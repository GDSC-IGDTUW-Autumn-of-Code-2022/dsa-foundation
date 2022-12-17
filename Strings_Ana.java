import java.lang.reflect.Array;
import java.util.Arrays;

public class Strings_Ana {
    public static void main(String[] args) {

        System.out.println(checkAnagram("CAT", "ACT"));
    }

    public static boolean checkAnagram(String a, String b) {
        // convert both the string to lower case
        String b1 = b.toLowerCase();
        String a1 = a.toLowerCase();
        // to compare both string, tore it into char array

        char[] ch = a1.toCharArray();
        char[] ch1 = b1.toCharArray();

        // sort both the array to compare directly
        Arrays.sort(ch);
        Arrays.sort(ch1);

        int i = 0;
        while (ch.length > 0 && ch.length > i) {
            if (a.length() == b.length()) {
                if (ch[i] == ch1[i]) {
                    i++;
                } else {
                    return false;
                }
            } else {
                return false;
            }

        }
        return true;
    }

}
