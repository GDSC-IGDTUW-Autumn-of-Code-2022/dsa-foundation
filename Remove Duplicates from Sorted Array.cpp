#include<bits/stdc++.h>
#define ll int

using namespace std;

    int removeDuplicates(vector<int>& nums) {
        ll op = 0;
        for(ll i=0;i<nums.size();i++)
            if(nums[i]!=nums[op])
                swap(nums[i],nums[++op]);
        return op+1;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<ll> vect(n);
        for(ll i=0;i<n;i++)
            cin>>vect[i];
        n = removeDuplicates(vect);
        for(ll i=0;i<n;i++)
            cout<<vect[i]<<" ";
    }