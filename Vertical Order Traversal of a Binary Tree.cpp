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

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    map<ll,map<ll,vector<ll>>> m;
    queue<pair<TreeNode<ll>*,pair<ll,ll>>> q;
    q.push({root,{0,0}});
    while(q.size())
    {
        auto p = q.front();
        ll c = p.second.first;
        ll r = p.second.second;
        TreeNode<ll>* cur = p.first;
        q.pop();
        m[c][r].push_back(cur->val);
        if(cur->left)
            q.push({cur->left,{c-1,r+1}});
        if(cur->right)
            q.push({cur->right,{c+1,r+1}});
    }
    vector<ll> ans;
    for(auto i:m)
        for(auto j:i.second)
            ans.insert(ans.end(),j.second.begin(),j.second.end());
    return ans;
}

int main()
{
    TreeNode<ll> *root = createTree();
    vector<ll> ans = verticalOrderTraversal(root);
    for(auto i:ans)
        cout<<i<<" ";
}