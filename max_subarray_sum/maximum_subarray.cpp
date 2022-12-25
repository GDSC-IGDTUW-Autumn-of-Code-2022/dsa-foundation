class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int curr = 0;
        int lar= INT_MIN;
 
    for (int i = 0; i <nums.size(); i++) {
        curr = curr + nums[i];
        lar = max(lar,curr);
 
        if(curr<0){
            curr = 0;
        }
    }
    return lar;
    }
    
};
