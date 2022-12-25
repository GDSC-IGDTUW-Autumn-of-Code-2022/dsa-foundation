
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;

public class Longest_SquareStreak {
    public static void main(String[] args) {
        int[] nums = { 4, 3, 6, 16, 8, 2 };
        int res = longestSquareStreak(nums);
        System.out.println(res);

    }

    public static int longestSquareStreak(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        Arrays.sort(nums);
        int maxLength = 0;
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                int val = map.get(nums[i]) + 1;
                map.put(nums[i] * nums[i], val);
                if (val > maxLength) {
                    maxLength = val;
                }
            } else {
                map.put(nums[i] * nums[i], 1);
            }
        }

        return (maxLength > 1) ? maxLength : -1;

    }

}
