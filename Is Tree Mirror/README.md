# Is Tree Binary 

### Question 

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Input: root = [1,2,2,3,4,4,3]

Output: true

Constraints:

The number of nodes in the tree is in the range [1, 1000].

-100 <= Node.val <= 100

### Algorithm 

We have to verify if the tree itself is Symmetric or not. 

So for that purpose I created a function symmetric that would check whether the left side and right side of root are symmetric 
or not, and then return it in the IsSymmetric function 

**Case 1** 

If both left and right side of root are None, we will return True. 


if p is None and q is None:

                return True

**Case 2** 

If only One of them is None, we will return False. (as it will be case of unsymmetric tree)


if p is None or q is None:

                return False 

**Case 3** 

Then we will check whether the left and right values of root are same or not, if they are same we will recursively check whether 
the left and right side is Mirror, or not. Else we will return False 


if p.val==q.val:

                    return symmetric(p.left,q.right) and symmetric(p.right,q.left)
                else:
                
                    return False

Finally we will return this function for root's left and right portion. 





