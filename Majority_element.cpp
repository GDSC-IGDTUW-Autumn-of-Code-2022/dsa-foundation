#include <iostream>

void findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; // sentinels
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
       
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
    
    if (maxCount > n / 2)
        std::cout << arr[index] << std::endl;
 
    else
        std::cout << "-1" << std::endl;
}
 