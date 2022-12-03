#include<bits/stdc++.h>
#define ll int

using namespace std;

    int majorityElement(vector<int>& nums) {
        ll count = 1;
        ll ans = nums[0];
        for(ll i=1;i<nums.size();i++)
        {
            if(count==0)
                count = 1, ans = nums[i];
            else if(nums[i]==ans)
                count+=1;
            else 
                count-=1;
        }
        count = 0;
        for(auto i:nums)
            if(i==ans)
                count++;
        if(count>=nums.size()/2)
            return ans;
        return -1;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<ll> vect(n);
        for(ll i=0;i<n;i++)
            cin>>vect[i];
        cout<<majorityElement(vect);
    }