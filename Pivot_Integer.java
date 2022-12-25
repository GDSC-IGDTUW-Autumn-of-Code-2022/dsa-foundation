public class Pivot_Integer {
    public static void main(String[] args) {
        int[] nums = { -1, -1, -1, -1, -1, 0 };
        int res = pivot(nums);
        System.out.println(res);

    }

    public static int pivot(int[] nums) {
        int length = nums.length;
        int sum = 0;
        for (int i : nums) {
            sum = sum + i;
        }
        int presum = 0;
        for (int i = 0; i < length; ++i) {
            // presum == sums - nums[i] - presum
            if (presum << 1 == sum - nums[i]) {
                return i;
            }
            presum += nums[i];
        }
        return -1;
    }

}
