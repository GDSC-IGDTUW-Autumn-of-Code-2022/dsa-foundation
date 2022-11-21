
##Problem Statement:-
Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and return its sum and print the subarray.

##Examples:

##Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 

Explanation: [4,-1,2,1] has the largest sum = 6. 

##Examples 2: 

Input: arr = [1] 

Output: 1 

Explanation: Array has only one element and which is giving positive sum of 1. 

##Approach:-
First of all we will make a variable sum and initialize with 0.
we will iterate the loop from 0 to n ,and keep adding the ith index element to sum .
will create a variable maxi and if maxi is greater than sum,then sum=maxi;
at last return maxi.

