public class MissingPositive {
    public static void main(String[] args) {
        int[] nums = { 7, 8, 9, 11, 12 };
        int ans = smallestPositive(nums);
        System.out.println(ans);

    }

    public static int smallestPositive(int[] nums) {
        int n = nums.length;
        int N = 100010;
        boolean[] present = new boolean[N];

        int ele = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0 && nums[i] <= n) {
                present[nums[i]] = true;
            }
            ele = Math.max(ele, nums[i]);
        }
        for (int i = 1; i < N; i++) {
            if (!present[i]) {
                return i;
            }
        }
        return ele + 1;
    }

}
