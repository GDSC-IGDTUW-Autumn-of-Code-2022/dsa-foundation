import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Remove_duplicate {
    public static void main(String[] args) {
        int[] nums = { 1, 1, 2, 2, 3, 3 };
        int res = removeDuplicates(nums);
        System.out.println(res);
        System.out.println(Arrays.toString(nums));

    }

    public static int removeDuplicates(int[] nums) {

        List<Integer> list = new ArrayList<Integer>(nums.length);
        for (int i = 0; i < nums.length; i++) {
            if (!list.contains(nums[i])) {
                list.add(nums[i]);

            }
        }
        int[] arr = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            arr[i] = list.get(i);
            nums[i] = arr[i];

        }
        for (int i = list.size(); i < nums.length; i++) {
            nums[i] = 0;
        }

        return list.size();

    }

}
