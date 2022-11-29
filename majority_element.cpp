#include<iostream>
using namespace std;



/*
logic applied:
firstly we initialise count to 0, and majority element to 0
then we run a loop and perform actions under following conditions:
        if(count is 0) 
        arr[i] is made the majority element
        
        if(nums[i] is equal to majority element ),
        we increase the count by 1)
        
        else
        we decrease the count
        
        
 T.C. =O(N)
        
        
*/

 int majorityElement(vector<int>& nums)
 {
         int count=0;
         int major_element=0;
         for(int i=0;i<nums.size();i++)
         {
             if(count==0)  
                      major_element=nums[i];
             if(major_element==nums[i]) 
                      count++;
             else   count--;
         }return major_element;
 }
