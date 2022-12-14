# ALGORITHM 

## Problem Statement 
Given an expression string expression, write a progrmam to examin wheather the paires and the oreders of "{" , "}"  "("  , ")"
"[" , "]" are correct in the given expression or not .

## Approach 
The idea is to pull all the opening brackets in the stack. Whenever you hit a closing bracket, search if the top of the stack is the opening bracket of the same nature. If this holds then pop the top of the stack and continue the iteration, in the end if the stack is empty the return true and if not empty then return false.

## Follow the given steps to implement the idea 

## Step 1
Declare the stack (name temp).
stack<char> temp;

## Step 2 
Now treverse the string. If current character is a opening bracket ( "(", "{", "[" ) then push it into stack.
/*if(temp.empty())
        {
            temp.push(expression[i]);
        }*/

## Step 3
If the current character is closng bracket ( ")", "}", "]" ) then pop the stack and if the poped chracte is the matching starting bracket then it is a balance brackets.
/*else if((temp.top()=='(' && expression[i]==')') || (temp.top()=='{' && expression[i]=='}') ||(temp.top()=='[' && expression[i]==']'))
        {
            temp.pop();
        }*/

## Step 4
If at the last the stack is empty then return true. If not empty then retrun false.
/*if(temp.empty())
    {
        return true;
    }
    else
    {
        return false;
    }*/

## Example
Input: exp = “[()]{}{[()()]()}” 
Output: Balanced
Explanation: all the brackets are well-formed

Input: exp = “[(])” 
Output: Not Balanced 

## Complexity Analysis

## Time complexity : O(n)
Iteration over the string of size N one time.

## Space Complexity : O(n)
For stack.     