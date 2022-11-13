This is the most optimised approach with Time Complexity -O(2(m+n))

head A is the head of first Linked List and head Bis the head of second Linked List

Below is the working code on Leetcode

SOLUTION
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        
        ListNode root1=headA;
        ListNode root2=headB;
                
            while(root1!=root2){
                if(root1==null)               
                root1=headB; 
     
                else
                root1=root1.next;
                
                if(root2==null)
                root2=headA;
                
                else
                root2=root2.next;
            }

        return root1;
    }
}
