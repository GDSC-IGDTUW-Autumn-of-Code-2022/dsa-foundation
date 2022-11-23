#include<bits/stdc++.h>
#define ll int

using namespace std;

int Kadanes(vector<int>& nums) {
    ll ans = INT_MIN;
    ll sum = 0;
    for(auto i:nums)
    {
        sum += i;
        ans = max(ans,sum);
        sum = max(sum,0);
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(ll i=0;i<n;i++)
        cin>>nums[i];
    cout<<Kadanes(nums);
}