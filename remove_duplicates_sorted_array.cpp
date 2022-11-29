#include<iostream>
#include<vector>
using namespace std;


//we are provided a sorted array with duplicate entries
//we need to form an array with unique elements by removing the duplicates
//We are required to return the number of unique elements in the given array

//Note if you donot give a sorted input array , then prior to the below fn , perform  sort(nums.begin(),nums.end())

int removeDuplicates(vector<int>& nums) 
    {
        //we try to get the size of the array
        int s=nums.size();                
  
        //if the array has only element, it means there is no duplicate entries and hence 1 unique element is present
        if(s==1)    return 1;             
         int j=0;
        
  
        //if more than 1 element is present we run a loop and check if adjacent elements are identical 
        for(int i=0;i<s-1;i++)
        {
          
          //if we get an unmatched entry pair, we add it at j-th index and then increment the j-th index
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
          //if we get identical entry, we simly get to the next iteration of the loop
        }
  
        //adding the last element of the array
        nums[j++]=nums[s-1];
        
        //j - gives the number of unique elements
        return j;
    }


//Driver code
int main()
{
    cout<<"enter the size of your array ? ";
    int n;
    cin>>n;
    vector<int> ar(n);
    cout<<"\nplease enter the numbers for the array in sorted manner\n";
    for(int i=0;i<n;i++)
    {
        cout<<"element"<<i+1<<" : ";
        cin>>ar[i];
    }
    
    //array intially
    for(int i=0;i<n;i++)
      cout<<ar[i]<<" ";
  
    //remove duplicates and number of unique entries
     int unique_entry=removeDuplicates(ar);
      cout<<"\nthe number of unique entries are: "<<unique_entry;
  
}
