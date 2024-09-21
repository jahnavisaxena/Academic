/*11.	Print all Distinct ( Unique ) Elements in given Array: Input: arr[] = {12, 10, 9, 45, 2, 10, 10, 45} Output: 12, 10, 9, 2*/
#include <stdio.h>
#include <stdbool.h>

void printDistinct(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isDistinct = true;

        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                isDistinct = false;
                break;
            }
        }

        
        if (isDistinct)
        {
            printf("%d ", nums[i]);
        }
    }
}

int main()
{
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Distinct elements are: ");
    printDistinct(arr, n);
    
    return 0;
}
