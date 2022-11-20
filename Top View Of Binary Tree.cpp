// Problem Link - https://www.codingninjas.com/codestudio/problems/799401?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
#define ll int
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    map<ll,ll> m;
    vector<ll> ans;
    queue<pair<ll,TreeNode<int>*>> q;
    if(root==nullptr)
        return ans;
    q.push({0,root});
    while(q.size())
    {
        auto cur = q.front();
        q.pop();
        if(m.count(cur.first)==0)
            m[cur.first] = cur.second->val;
        if(cur.second->left)
            q.push({cur.first-1,cur.second->left});
        if(cur.second->right)
            q.push({cur.first+1,cur.second->right});
    }
    for(auto i:m)
        ans.push_back(i.second);
    return ans;
}