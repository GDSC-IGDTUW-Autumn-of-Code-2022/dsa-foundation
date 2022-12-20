#include<bits/stdc++.h>
#define ll int

using namespace std;

    int main()
    {
        ll size;
        cin>>size;
        ll arr[size];
        for(ll i=0;i<size;i++)
            cin>>arr[i];
        for(ll i=1;i<size;i+=2)
            swap(arr[i],arr[i-1]);
        for(ll i=0;i<size;i++)
            cout<<arr[i]<<" ";
    }