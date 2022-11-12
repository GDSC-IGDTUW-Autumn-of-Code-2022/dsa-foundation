#include<bits/stdc++.h>
using namespace std;

int bracketReversals(string s){
    int n=s.length();

    //base condition
    //if n is odd then unbalanced paranthesis will be there
    if(n%2!=0) return -1;

    //create a stack s to store the elements of the string
    stack <char> st;
    
    for(int i=0;i<n;i++){
        if(s[i]=='}' && !st.empty()){
            if(st.top()=='{') st.pop();
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }

int stack_len = st.size();

//counting the opening brackets at the top of stack
int open=0;
    while(!st.empty() && st.top()=='{'){
     st.pop();
     open++;
   } 
   int res = open%2;
   return((stack_len/2)+res);

}

int main(){
    string s="}}{}{{";
    cout<<bracketReversals(s);
}
