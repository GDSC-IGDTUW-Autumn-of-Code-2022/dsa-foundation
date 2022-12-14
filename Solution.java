/*
There are three conditions that mark the end of this traversal:

1 .If the element to be marked is negative - because we are needed to fin
   smallest and a positive number.Therfore
   No need to mark the
2.If the element to be marked is greater than N-
3.f the presence of the current element is already marked

It is also possible that in the current traversal not all the elements of an array in the range [1, N]
appear present. Every element of the array lying within the range is checked to ensure they are all
marked present. In the absence of marking, we begin our traversal from that element in the array again.
*/
public class Solution {
    static int findMissingNo(int []arr, int n)
    {
        // to store Present element of array
        int val;

        // to store next array element in

        int nextval;

        for (int i = 0; i < n; i++) {

            // if value is negative or greater
            // than array size, then it cannot
            // be marked in array. So move to
            // next element.
            if (arr[i] <= 0 || arr[i] > n)
                continue;

            val = arr[i];

            // traverse the array until we
            // reach at an element which
            // is already marked or which
            // could not be marked.
            while (arr[val - 1] != val) {
                nextval = arr[val - 1];
                arr[val - 1] = val;
                val = nextval;
                if (val <= 0 || val > n)
                    break;
            }
        }

        // find first array index which is
        // not marked which is also the
        // smallest positive missing
        // number.
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        // if all indices are marked, then
        // smallest missing positive
        // number is array_size + 1.
        return n + 1;
    }
}
/*
TIME COMPLEXITY
In the worst case, each element in the range [1, N] will be traversed at most twice.
 First, when traversing a range of elements starting from some other element.
 The second step is to determine whether a new traversal is required to mark unmarked elements
  from this element. The worst case scenario involves traversing elements twice.
  Thus, the time complexity is O(n), since there are two computations per n.
 */