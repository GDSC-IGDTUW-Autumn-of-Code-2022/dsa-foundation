import java.util.PriorityQueue;

public class Kth_largest_elem {
    public static void main(String[] args) {
        int[] nums = { 3, 2, 1, 5, 6 };
        int k = 3;
        int rse = kth_largest(nums, k);
        System.out.println(rse);

    }

    public static int kth_largest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < k; i++) {
            pq.add(nums[i]);
        }
        for (int i = k; i < nums.length; i++) {
            if (pq.peek() < nums[i]) {
                pq.poll();
                pq.add(nums[i]);
            }
        }
        return pq.peek();
    }

}
