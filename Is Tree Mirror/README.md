Symmetric Tree

// Java program to check is binary tree is symmetric or not

# Algorithm :

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Given a binary tree, check whether it is a mirror of itself.

For two trees to be mirror images, the following
    three conditions must be true
    1.) Their root node's key must be same
    2.) left subtree of left tree and right subtree
    of right tree have to be mirror images
    3.) right subtree of left tree and left subtree
    of right tree have to be mirror images


## STEP 1:

The function isSymmetric() will take root and if root is null return true because the tree will be symmetric then call isMirror() function which will check whether the tree is mirror or not.

    /* function to check if the tree is Symmetric */
    <!-- public static boolean isSymmetric(TreeNode root) {

        //Base case
        if(root==null){
            return true;
        }

        // check if tree is mirror of itself
        return isMirror(root.left,root.right);
    } -->


## STEP 2:

The idea is to write a recursive function isMirror() that takes two trees as an argument and returns true if trees are the mirror and false if trees are not mirrored. The isMirror() function recursively checks two roots and subtrees under the root.

If leftroot and rightroot both are null then it isMirror return true.

If any of leftroot or rightroot is null then it is not mirror so return false.

If the leftroot value is different then rightroot value then return false (it is not mirror).

Then call recursion if both is true then return true else return false.


    /*Check whether left and right is mirror or not */
    <!-- public static boolean isMirror(TreeNode leftroot, TreeNode rightroot){
        if(leftroot==null && rightroot==null){
            return true;
        }
        if(leftroot==null || rightroot==null){
            return false;
        }
        if(leftroot.val!=rightroot.val){
            return false;
        }
        return isMirror(leftroot.left,rightroot.right) && isMirror(leftroot.right,rightroot.left);
    }  -->


In main function we created the object of treeNode and made a tree by adding left and right val and then we have checked whether the tree is symmetric or not.


Input :   
    
     1
   /   \
  2     2
 / \   / \
3   4 4   3

Output : Symmetric

Input :    
   
    1
   / \
  2   2
   \   \
   3    3

Output : Not Symmetric