#include<bits/stdc++.h>
#define ll int

using namespace std;

    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<ll,ll> m;
        vector<vector<ll>> ans(2);
        for(auto i:matches)
        {
            if(m.count(i[0])==0)
                m[i[0]] = 0;
            m[i[1]]++;
        }
        for(auto i:m)
        {
            if(i.second==0)
                ans[0].push_back(i.first);
            else if(i.second==1)
                ans[1].push_back(i.first);
        }
        return ans;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<vector<ll>> matches(n);
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            matches[i] = {a,b};
        }
        vector<vector<ll>> ans = findWinners(matches);
        for(auto i:ans)
        {
            for(auto j:i)
                cout<<j<<" ";
            cout<<endl;
        }
    }