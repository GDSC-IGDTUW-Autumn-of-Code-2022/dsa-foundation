class pivot {
    public static void main(String[] args) {
        int nums[] = {1,7,3,6,5,6};
        int ans= pivotIndex(nums);
        System.out.println(ans);
    }
    public static int pivotIndex(int[] nums) {
        int left_sum=0;
        int total_sum=0;
        for(int i: nums)
        total_sum= total_sum+i;
        for(int i=0; i< nums.length; i++){
            if(total_sum- left_sum-nums[i]== left_sum)
            return i;
            else 
            left_sum=left_sum+nums[i];
        }
        return -1;
        
    }
}