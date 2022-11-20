#include <iostream>
#include <string>
#include<stack>
using namespace std;

//Function to check if rackets are balanced or not
bool isBalanced(string expression) 
{
    //Declaration of stack to hold the brackets
    stack<char> temp;
    for(int i=0;i<expression.length();i++)
    {

        //If stack is empty then push the current bracket in stack
        if(temp.empty())
        {
            temp.push(expression[i]);
        }

        //Else if you find any complete bracket then pop it 
        else if((temp.top()=='(' && expression[i]==')') || (temp.top()=='{' && expression[i]=='}') ||(temp.top()=='[' && expression[i]==']'))
        {
            temp.pop();
        }

        else
        {
            temp.push(expression[i]);
        }
    
    }

    //If stack is empty then return true, else return false
    if(temp.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//Main function to print the ans 
int main() 
{
    string input;
    cout<<"Enter Brakets";
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}