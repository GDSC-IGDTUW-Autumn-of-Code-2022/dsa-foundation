#include<bits/stdc++.h>
#define ll int

using namespace std;

 int maxProfit(vector<int>& prices) {
        ll ans = 0;
        ll mini = INT_MAX;
        for(auto i:prices)
            mini = min(mini,i), ans = max(ans,i-mini);
        return ans;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<ll> vect(n);
        for(ll i=0;i<n;i++)
            cin>>vect[i];
        cout<<maxProfit(vect);
    }