#include<bits/stdc++.h>
#define ll int

using namespace std;
  
    struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
  
    int pairSum(ListNode* head) {
        if(head==nullptr)
            return 0;
        ListNode* fast = head, *slow = head;
        while(fast->next and fast->next->next)
            fast = fast->next->next,slow = slow->next;
        ListNode* pre = nullptr;
        while(slow)
        {
            ListNode* nex = slow->next;
            slow->next = pre;
            pre = slow;
            slow = nex;
        }
        ll ans = 0;
        slow = head;
        while(slow and pre)
            ans = max(slow->val+pre->val, ans), slow = slow->next,pre = pre->next;
        return ans;
    }
    ListNode* createList()
    {
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        ll val = 0;
        while(1)
        {
            cin>>val;
            if(val==-1)
                break;
            ListNode* newNode = new ListNode(val);
            temp->next = newNode;
            temp = newNode;
        }
        return head->next;
    }
    int main()
    {
        ListNode* head = createList();
        cout<<pairSum(head);
    }