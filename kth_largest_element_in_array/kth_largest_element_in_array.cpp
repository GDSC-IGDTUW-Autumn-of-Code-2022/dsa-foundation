class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {


    sort(nums.begin(),nums.end());
    int i=nums.size();
    return nums[i-k];


    }
};
