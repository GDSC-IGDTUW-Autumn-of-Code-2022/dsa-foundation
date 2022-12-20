#include<bits/stdc++.h>
#define ll int

using namespace std;
    bool check(ll i, ll j, ll ind, string &word, vector<vector<char>> &board, vector<vector<ll>> &vis)
    {
        if(ind==word.length())
            return true;
        vis[i][j] = 1;
        for(auto x:{-1,1})
        {
            if(i+x>=0 and i+x<board.size() and vis[i+x][j]==0 and board[i+x][j]==word[ind])
            {
                if(check(i+x,j,ind+1,word,board,vis))
                    return true;
            }
            if(j+x>=0 and j+x<board[0].size() and vis[i][j+x]==0 and board[i][j+x]==word[ind])
            {
                if(check(i,j+x,ind+1,word,board,vis))
                    return true;
            }
        }
        vis[i][j] = 0;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<ll>> vis(board.size(),vector<ll>(board[0].size(),0));
        for(ll i=0;i<board.size();i++)
            for(ll j=0;j<board[0].size();j++)
                if(board[i][j]==word[0])
                    if(check(i,j,1,word,board,vis))
                        return true;
        return false;
    }

    int main()
    {
        ll m,n;
        cin>>m>>n;
        vector<vector<char>> board(m,vector<char>(n));
        for(ll i=0;i<m;i++)
            for(ll j=0;j<n;j++)
                cin>>board[i][j];
        string word;
        cin>>word;
        cout<<exist(board,word);
    }