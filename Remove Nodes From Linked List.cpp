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
 
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = head;
        while(temp)
        {
            while(st.size() and temp->val>st.top()->val)
                st.pop();
            st.push(temp);
            temp = temp->next;
        }
        ListNode* ans;
        ans = st.top();
        temp = ans;
        st.pop();
        while(st.size())
            temp->next = st.top(), temp = st.top(), st.pop();
        temp->next = nullptr;
        ListNode* pre = nullptr;
        while(ans)
        {
            ListNode* nex = ans->next;
            ans->next = pre;
            pre = ans;
            ans = nex;
        }
        return pre;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<vector<ll>> matches(n);
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            matches[i] = {a,b};
        }
        vector<vector<ll>> ans = findWinners(matches);
        for(auto i:ans)
        {
            for(auto j:i)
                cout<<j<<" ";
            cout<<endl;
        }
    }