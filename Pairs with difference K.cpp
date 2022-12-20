#include<bits/stdc++.h>
#define ll int

using namespace std;

    int main()
    {
        ll n;
        cin>>n;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++)
            cin>>nums[i];
        ll k;
        cin>>k;
        map<ll,ll> m;
        for(auto i:nums)
            m[i]++;
        ll count = 0;
        if(k==0)
        {    for(auto i:m)
                if(i.second>1)
                    count++;
        return count;
        }
        for(auto i:m)
        {
            if(m.count(i.first+k)>0)
                count++;
        }
        cout<<count;
    }