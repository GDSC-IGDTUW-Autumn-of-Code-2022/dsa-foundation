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

    int widthOfBinaryTree(TreeNode<ll>* root) {
        if(root==nullptr)
            return 0;
        queue<pair<TreeNode<ll>*,ll>> q;
        q.push({root,0});
        q.push({nullptr,-1});
        ll ans = 0;
        ll mini = 0, maxi = 0;
        ll op = 0;
        ll flag = 1;
        while(q.size())
        {
            auto cur = q.front();
            q.pop();
            if(cur.first==nullptr)
            {
                if(q.size()==0)
                    break;
                q.push({nullptr,-1});
                flag = 1;
                continue;
            }
            if(flag)
                op = cur.second, flag = 0;
            cur.second-=op;
            mini = min(mini,cur.second);
            maxi = max(maxi,cur.second);
            if(cur.first->left)
                q.push({cur.first->left, 2ll*cur.second+1});
            if(cur.first->right)
                q.push({cur.first->right, 2ll*cur.second+2});
            ans = max(ans,maxi-mini+1);
        }
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
    cout<<widthOfBinaryTree(root);
}