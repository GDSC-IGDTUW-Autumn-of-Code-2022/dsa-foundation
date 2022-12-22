
import java.util.HashSet;

public class Happy_Number {
    public static void main(String[] args) {
        int n = 15;
        System.out.println(isHappy(n));

    }

    public static boolean isHappy(int n) {
        int rem = 0;
        HashSet<Integer> hs = new HashSet<>();
        while (n != 1) {
            if (hs.contains(n)) {
                return false;
            }
            hs.add(n);
            int sum = 0;
            while (n > 0) {
                rem = n % 10;
                sum = (int) (Math.pow(rem, 2) + sum);
                n = n / 10;

            }
            n = sum;

        }
        return true;

    }

}
