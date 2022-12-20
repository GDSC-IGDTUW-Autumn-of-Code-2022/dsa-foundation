// Problem Link - https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

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

void DFS(TreeNode<ll>* root, ll op, vector<ll> &ans)
{
    if(root==nullptr)
        return;
    if(ans.size()==op)
        ans.push_back(root->val);
    DFS(root->left,op+1,ans);
    DFS(root->right,op+1,ans);
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
    vector<ll> ans;
    DFS(root,0,ans);
    for(auto i:ans)
        cout<<i<<" ";
}