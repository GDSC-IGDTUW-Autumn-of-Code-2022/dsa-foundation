#include<bits/stdc++.h>
#define ll int

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    for(ll i=0;i<k;i++)
        pq.push(nums[i]);
    for(ll i=k;i<nums.size();i++)
        if(nums[i]>pq.top())
            pq.pop(),pq.push(nums[i]);
    return pq.top();
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(ll i=0;i<n;i++)
        cin>>nums[i];
    ll k;
    cin>>k;
    cout<<findKthLargest(nums,k);
}