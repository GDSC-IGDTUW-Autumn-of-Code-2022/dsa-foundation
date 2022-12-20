#include<bits/stdc++.h>
#define ll int

using namespace std;

    int main()
    {
        ll n;
        cin>>n;
                unordered_map<ll,ll> l;
        while(l.count(n)==0 and n!=1){
            ll val = n;
            l[n]++;
            ll sumD = 0;
            while(val){
                sumD += (val%10)*(val%10);
                val = val/10;}
            n = sumD;
            }
        cout<<n==1;
    }