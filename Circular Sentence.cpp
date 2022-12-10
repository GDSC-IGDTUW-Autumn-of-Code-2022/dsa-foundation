#include<bits/stdc++.h>
#define ll int

using namespace std;

    bool isCircularSentence(string sentence) {
        string str = "";
        vector<string> vect;
        for(auto i:sentence)
        {
            if(i==' ')
                vect.push_back(str), str = "";
            else
                str += i;
        }
        vect.push_back(str);
        char pre = vect[0][vect[0].length()-1];
        for(ll i=1;i<vect.size();i++)
        {
            if(pre!=vect[i][0])
                return false;
            pre = vect[i][vect[i].length()-1];
        }
        return vect[0][0]==vect[vect.size()-1][vect[vect.size()-1].length()-1];
    }

    int main()
    {
        string str;
        cin>>str;
        cout<<isCircularSentence(str);
    }