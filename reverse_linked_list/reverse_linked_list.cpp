class Solution {
    private:
    void reverse(ListNode* &head, ListNode* curr, ListNode*prev){
       if(curr ==NULL){
           head = prev;
           return;
       }
        ListNode* forward = curr->next;
        reverse(head,forward,curr);
        curr->next = prev;

    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
    
};
