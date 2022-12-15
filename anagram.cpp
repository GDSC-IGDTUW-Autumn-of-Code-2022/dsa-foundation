/*Problem Statement: Given two strings, check if two strings are anagrams of each other or not
Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT 
Output: false
Explanation: Since the count of U and T  is not equal in both strings.
  
  
 Approach :
 We will sort both the strings and then will compare the element in both the strings 
  */

#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
  // if both string have diff length,it will return false .No point in checking
    if (str1.length() != str2.length())
    return false;
 //sorting both the strings 
   sort(str1.begin(), str1.end());
   sort(str2.begin(), str2.end());
 
  // checking that every character of both the strings are equal or not
   for (int i = 0; i < str1.length(); i++)
  {
      if (str1[i] != str2[i])
      return false;
  }
  return true;
}
int main()
{
  string Str1;
  string Str2;
  cin>>Str1;
  cin>>Str2;
  if(CheckAnagrams(Str1, Str2))
    cout << "True" << endl;
  else
    cout<<"False"<<endl;
  return 0;
}
