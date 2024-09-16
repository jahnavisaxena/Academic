#include <stdio.h>

int findRotationCount(int arr[], int n) {
    int low = 0, high = n - 1;
    
    // If the array is already sorted, there is no rotation
    if (arr[low] <= arr[high]) {
        return 0;
    }
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if the mid element is the pivot (smallest element)
        if (arr[mid] > arr[mid + 1]) {
            return mid + 1;
        }
        if (arr[mid] < arr[mid - 1]) {
            return mid;
        }
        
        // Decide whether to move to the left or right half
        if (arr[mid] >= arr[low]) {
            // If the left part is sorted, move to the right part
            low = mid + 1;
        } else {
            // If the right part is sorted, move to the left part
            high = mid - 1;
        }
    }
    
    return 0;
}

int main() {
    int arr[] = {5, 6, 7, 8, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int rotationCount = findRotationCount(arr, n);
    printf("The array is rotated %d times\n", rotationCount);
    
    return 0;
}
