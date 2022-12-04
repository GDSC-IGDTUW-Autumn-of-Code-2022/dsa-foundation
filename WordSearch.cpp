#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool search(int i,int j,int count,vector<vector<char>>& board,string word){
    //if we have found the whole string then count will become (word.length()==count) so return true
    if(word.length()==count){
        return true;
    }
    // check for boundary    
    // when current char is not same with word char
    if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[count])
        return false;
        
        
        
    char temp = board[i][j];             // current char
    board[i][j] = '*';                   // to be marked as visited
        
        
    // up , down , left , right (possible moves)
    bool ans = search(i-1,j,count+1,board,word) || search(i+1,j,count+1,board,word) || search(i,j-1,count+1,board,word) || search(i,j+1,count+1,board,word);
    board[i][j] = temp;                 // make board as it is 
    return ans;
}
    
bool search_word(vector<vector<char>>& board, string word) {
    int n = board.size();               //  no of rows
    int m = board[0].size();            //  no of cols
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==word[0] && search(i,j,0,board,word)) // whenever we find first letter of word start searching from there
            {
                return true;
            }
        }
    }
        
    return false;
}

int main (){
    int row, col;
    cin>>row;                        //enter no of rows of board
    cin>>col;                        //enter no of cols of board
    vector<vector<char>> board(row, vector<char>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>board[i][j];
        }
    }
    string word;                      //enter word to be searched
    cin>>word;
    cout<<search_word(board,word)

}
   