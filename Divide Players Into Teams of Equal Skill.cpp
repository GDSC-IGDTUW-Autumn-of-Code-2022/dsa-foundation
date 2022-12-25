#include<bits/stdc++.h>
#define ll int

using namespace std;

    long long dividePlayers(vector<int>& skill) {
        unordered_map<ll,ll> m;
        ll n = skill.size();
        if(n==2)
            return skill[0]*skill[1];
        ll op = 0;
        for(auto i:skill)
            m[i]++, op += i;
        ll ok = (n/2);
        op/=(ok);
        ll sum = 0;
        for(auto i:skill)
        {
            if(m[i]==0)
                continue;
            if(m[op-i]==0)
                return -1;
            m[i]--;
            m[op-i]--;
            sum += ((i)*(op-i));
        }
        return sum;
    }

    int main()
    {
        ll n;
        cin>>n;
        vector<ll> vect(n);
        for(ll i=0;i<n;i++)
            cin>>vect[i];
        cout<<dividePlayers(vect);
    }