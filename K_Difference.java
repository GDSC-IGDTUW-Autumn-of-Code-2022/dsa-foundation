
import java.util.Map;
import java.util.HashMap;

public class K_Difference {
    public static void main(String[] args) {
        int[] nums = { 1, 3, 1, 5, 4 };
        int k = 0;
        int res = findPairs(nums, k);
        System.out.println(res);

    }

    public static int findPairs(int[] nums, int k) {
        int count = 0;
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; ++i)
            map.put(nums[i], i);

        for (int i = 0; i < nums.length; ++i) {
            final int targetElem = nums[i] + k;
            if (map.containsKey(targetElem) && map.get(targetElem) != i) {
                ++count;
                map.remove(targetElem);
            }
        }

        return count;
    }

}
