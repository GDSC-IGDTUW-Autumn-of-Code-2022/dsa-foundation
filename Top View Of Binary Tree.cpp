// Problem Link - https://www.codingninjas.com/codestudio/problems/799401?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
#define ll int

using namespace std;

// ***********************************************************

// Following is the TreeNode class structure:

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

// ***********************************************************

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

TreeNode<ll>* createTree()
{
    queue<TreeNode<ll>*> q;
    TreeNode<ll> *root = nullptr;
    ll val;
    cout<<"Enter value of root - "<<endl;
    cin>>val;
    root = new TreeNode<ll>(val);
    q.push(root);
    while(q.size())
    {
        auto cur = q.front();
        q.pop();
        ll lef,rig;
        cout<<"Enter left child of "<<cur->val<<endl;
        cin>>lef;
        cout<<"Enter right child of "<<cur->val<<endl;
        cin>>rig;
        if(lef==-1)
            cur->left = nullptr;
        else
        {
            TreeNode<ll> *l = new TreeNode<ll>(lef);
            cur->left = l; 
            q.push(l);
        }
        if(rig==-1)
            cur->right = nullptr;
        else
        {
            TreeNode<ll> *r = new TreeNode<ll>(rig);
            cur->right = r;
            q.push(r);
        }
    }
    return root;
}

int main()
{
    TreeNode<ll> *root = createTree();
    vector<ll> ans = getTopView(root);
    for(auto i:ans)
        cout<<i<<" ";
}