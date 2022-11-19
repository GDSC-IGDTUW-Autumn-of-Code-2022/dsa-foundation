import java.util.* ;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    /* empty constructor */
    TreeNode() {
    }

    /* constructor to initialise the root */
    TreeNode(int val) {
        this.val = val; 
    }

    /* function to check if the tree is Symmetric */
    public static boolean isSymmetric(TreeNode root) {
        if(root==null){
            return true;
        }
        return isMirror(root.left,root.right);
    }


    /*Check whether left and right is mirror or not */
    public static boolean isMirror(TreeNode leftroot, TreeNode rightroot){
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
    }

    /* driver function to test other functions */
    public static void main(String[] args){
        TreeNode root = new TreeNode(1);
        
        root.left = new TreeNode(2);
        root.right = new TreeNode(2);
        root.left.left = new TreeNode(3);
        root.left.right = new TreeNode(4);
        root.right.left = new TreeNode(4);
        root.right.right = new TreeNode(3);
         
        /*if the tree is symmetric then it will print "The given tree is Symmetric" 
        else it will print "The given tree is not Symmetric" */ 
        if(isSymmetric(root)){
            System.out.println("The given tree is Symmetric");
        }else{
            System.out.println("The given tree is not Symmetric");
        }
    }
}