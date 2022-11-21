# Palindromic String 

### Algorithm 

In the above given question, given integers X and Y, we need to generate a palindrome of length X consisting of lowercase English alphabets such that the number of distinct characters in the palindrome is exactly Y. And if it is not possible, we will have to return -1 as the output. 

So to solve this given problem, I took all the cases including the edge cases that we will have to tackle in the given problem statement. 
We also initialized an array s to append the result in it. 

### Different Steps

**x=length of string** 

**y= unique characters**

#### Step 1 (Case 1) 

When y==1, so only 1 unique character and x!=1, in that case I can print a certain character x times. In this case, I have printed "a".

if y==1 and x!=1:
        for i in range(x):
            print('a',end="")

####  Step 2 (Case 2)

When x==1, so I can print any 1 character. In this case I have printed "a".

elif x==1:
        print('a')

#### Step 3 (Case 3)

When x==y, we can't have a palindrome as all uniqye characters would equal to the length of string, so output = -1. 

elif (x==y):
        print(-1)

#### Step 4 (Case 4)

Here comes the case when the length is odd and y> (x//2)+1, so it is not possible to create a palindrome, return -1.

elif x%2!=0 and y>((x//2)+1):
        print(-1)

#### Step 5 (Case 5)

When the length of the string is even, and y>x//2, we can't build a palindrome and in that case we will have to return -1. 

elif x%2==0 and y>x/2:
        print(-1)

**If none of the above condition is satisfied, then we will have a plaindrome.** 

**We will take 2 cases where x is even and x is odd.**

#### Step 6 (Case 6)

When x is even, we will traverse till y and append the disctint characters in our string (like a, b, c .....)

After traversing till y, we will traverse till x//2 to append 1 character (in this case "a") in the array s. 
Now we will reverse the given s and store it in l  and append l's elements in the end of s.  

elif (x%2==0):
        for i in range(0,y):
            s.append(chr(i+97))
        for i in range(y,(x//2)):
            s.append(chr(97))
        l=s[::-1]
        for i in range(len(l)):
            s.append(l[i])
        for g in range(len(s)):
            print(s[g],end="")

#### Step 7 (Case 7)

When x is odd, we will traverse till y and append the disctint characters in our string (like a, b, c .....)

After traversing till y, we will traverse till half of x to append 1 character (in this case "a") in the array s. 
Now we will reverse the given s and store it in l  and append l's elements in the end of s.

    elif x!=1 and x%2!=0:
        for i in range(0,y):
            s.append(chr(i+97))
        for i in range(y,(x//2)+1):
            s.append(chr(97))
        l=s[len(s)-1:-1:-1]
        for i in range(len(l)):
            s.append(l[i])
        m=s[0:len(s)-1]
        m=m[::-1]
        for i in range(len(m)):
            s.append(m[i])
        for k in range(len(s)):
            print(s[k],end="")




