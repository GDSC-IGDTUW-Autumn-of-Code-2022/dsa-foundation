import java.util.Arrays;

public class Majority_Element {
    public static void main(String[] args) {
        int[] arr = { 2, 3, 3, 2, 3, 2, 2, 2 };
        int res = majorityEle(arr);
        System.out.println(res);

    }

    public static int majorityEle(int[] nums) {
        int count = 0;
        int max_ele = 0;
        for (int i = 0; i < nums.length; i = i + 1) {
            if (count == 0) {
                max_ele = nums[i];
            }
            if (nums[i] == max_ele) {
                count++;
            } else {
                count--;
            }

        }
        return max_ele;

    }

}
