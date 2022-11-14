Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
Example:
Input: matrix = |1  3  5  7 |
                |10 11 16 20|
                |23 30 34 60|
target = 3
Output: true

The check always starts at the end of the row. If target is smaller than the last element of the row, that means it might be in such row. If target is larger, proceed to the next row.

In the given example the search starts from 7, 3<7 so the number 3 must be in the left of 7. Then 5 is compared with 3, since 3<5 once again we move left, now 3 = 3, so the function returns true.

Hence worst case scenario is O(m+n).
