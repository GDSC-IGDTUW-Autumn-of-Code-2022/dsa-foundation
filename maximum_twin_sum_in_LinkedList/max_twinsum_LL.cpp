#include<iostream>
using namespace std;



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//function to reverse a linked list
ListNode* rev(ListNode* h)
{
        ListNode* prev=NULL;
        ListNode* cur=h;
        while(cur!=NULL)
        {
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }return prev;
}
    
//fetching the middle node by Floyds tortoise hare approach
ListNode* mid(ListNode* h)
{
        ListNode* fast=h;
        ListNode* slow=fast;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;                  //move slow pointer by 1 place
            fast=fast->next->next;            //move fast pointer by 2 places
        }return slow;
}


//pairsum function
int pairSum(ListNode* head)
{
        //store the head in temp node
        ListNode* temp=head;    
  
        //fetching middle node 
        ListNode* mid_node=mid(head);  
  
         //setting sum to int_min 
        int sum=INT_MIN;                   
  
        //reversing the nodes from middle node position upto the last node
        ListNode* revresed=rev(mid_node);                 
  
        //traversing the linked list till reversed doesn't reach its end ie; becomes NULL
        while(reversed!=NULL)                             
        {
            //storing sum of temps val and reversed val in nsum 
            int nsum=temp->val+reversed->val;
          
            //comparing nsum and sum to get maximum sum 
            sum=max(nsum,sum);
          
            //moving to the next nodes
            temp=temp->next;
            reversed=reversed->next;
        }return sum;
        
}
