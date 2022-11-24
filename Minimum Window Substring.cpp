#include<bits/stdc++.h>
#define ll int

using namespace std;
    
    string minWindow(string s, string t) {
        ll s1=0,e1=-1;
        ll len = INT_MAX;
        unordered_map<char,ll> m;
        for(auto i:t)
            m[i]++;
        unordered_map<char,ll> ok;
        ll start = 0, end = 0;
        while(end<s.length())
        {
            if(m.count(s[end]))
                ok[s[end]]++;
            ll flag = 1;
            for(auto i:m)
                if(ok[i.first]<i.second)
                    flag = 0;
            while(start<=end and flag)
            {
                if(end-start+1<len)
                    len = end-start+1,s1=start,e1=end;
                if(m.count(s[start]))
                    ok[s[start]]--;
                start++;
                for(auto i:m)
                    if(ok[i.first]<i.second)
                        flag = 0;
            }
            end++;
        }
        return s.substr(s1,e1-s1+1);
    }

    int main()
    {
        string s,t;
        cin>>s>>t;
        cout<<minWindow(s,t);
    }