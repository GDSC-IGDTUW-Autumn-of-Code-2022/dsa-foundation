class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int index = 0;
    int count = 1;
    for (int i = 1; i <nums.size(); i++) {
        if (nums[i] == nums[index]) count++;
        else count--;
        if (count == 0) {
            index = i;
            count = 1;
        }
    }
    if (count > 0) {
        int c = 0;
        int ele = nums[index];
        for (int i = 0; i <nums.size(); i++) {
            if (nums[i] == ele) c++;
        }
        if (c > nums.size() / 2) return(ele);
    }
    return(-1);
    }
};