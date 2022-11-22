# Balanced Parenthesis 

### Question 

Given an expression with only ‘}’ and ‘{‘. The expression may not be balanced. Find minimum number of bracket reversals to make the expression balanced.

Examples:

Input: exp = "}{"

Output: 2

We need to change '}' to '{' and '{' to
'}' so that the expression becomes balanced,
the balanced expression is '{}'

### Approach 

We will deal with the base case which states that if length of string is 0, then the reversal will be 0 and if the length of the input expression is odd, then also reversal is not possible. So we will return -1. 

We will initialise a stack s. 

While traversing the expression, if there is a '{', we will append it in the stack s. 

When we encounter a '}', we will check whether the last element is a '{' or '}'. 

If it is '{', we will pop the element from stack. else we will append it. 

Finally we will traverse through the stack s and maintain a variable count. Till the length of stack becomes 0, we will pop out last two elements. 

If the 2 elements are same, we just have to reverse 1 of them so increament count by 1. 

Else we will have to increament count by 2. 

Return the final count. 
