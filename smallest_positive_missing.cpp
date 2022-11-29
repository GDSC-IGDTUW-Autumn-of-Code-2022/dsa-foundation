#include<iostream>
using namespace std;


/*
logic applied: 
we try to place numbers from 1 to N (where N-size of the array) at their correct indexes
correct index for positive integers<N is    ar[i]=ar[ar[i]-1]
eg: ar=[3,4,-2,1]
    after shifting
    ar=[1,4,3,-2]
    
 NOTE: non-positive and numbers greater than N aren't worried about.
After changing the locations of numbers from 1 to N to their appropriate indexes, 
we run a loop to find an index which doen't has its corresponding positive integer, if we find such an index we return index+1.
in the above example , 
we find
at ar[1] 2 isn't present ,hence we return i+1
*/

int firstMissingPositive(vector<int>& nums) 
    {
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {       
            while (nums[i] >= 1 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
 
    // Checking any element which is not equal to i+1
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1) 
        {
            return i + 1;
        }
    }
 
    // Nothing is present return last index
    return n + 1;
       
    }
