Given an integer array nums, find the subarray which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

We have used KADANES ALGORITHM for this question.
Kadane’s algorithm is used to find out the maximum subarray sum from an array of integers. Here we shall discuss a C++ program to implement this algorithm.

Algorithm
Begin
Function kadanes(int array[], int length):
   Initialize
   highestMax = 0
   currentElementMax = 0
   for i = 0 to length-1
      currentElementMax = max(array[i],currentElementMax + array[i])
      highestMax = max(highestMax, currentElementMax)
   return highestMax
End
