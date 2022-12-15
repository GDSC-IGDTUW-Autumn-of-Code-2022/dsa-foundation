#### Problem Statement:
Given a string, find all the possible subsequences of the string.

Examples:

Example 1:
Input: str = "abc"
Output: a ab abc ac b bc c
Explanation: Printing all the 7 subsequence for the string "abc".

Example 2:
Input: str = "aa"
Output: a a aa 
Explanation: Printing all the 3 subsequences for the string "aa"


#### Solution : Using bit manipulation
To check whether the ith bit is set or not.If n&(1<<i) != 0,then the ith bit is set.
First, write down all the numbers from 0 to 2^(n)-1 and their bit representation.0 means I am not picking the character in my subsequence, and 1 means I am picking the character.

Basically, we traverse from 0 to 2^(n)-1 and check for every number if their bit is set or not. If the bit is set add that character to your subsequence.

#### Time Complexity: O(2^n * n)

Reason: O(2^n) for the outer for loop and O(n) for the inner for loop.

#### Space Complexity: O(1)
