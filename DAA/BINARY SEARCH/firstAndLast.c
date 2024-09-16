#include <stdio.h>

// Function to find the first occurrence of an element
int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            result = mid;  // Potential answer
            high = mid - 1; // Move to the left part to find the first occurrence
        }
        else if (arr[mid] > x) {
            high = mid - 1; // Move to the left half
        }
        else {
            low = mid + 1;  // Move to the right half
        }
    }
    
    return result;
}

// Function to find the last occurrence of an element
int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            result = mid;  // Potential answer
            low = mid + 1; // Move to the right part to find the last occurrence
        }
        else if (arr[mid] > x) {
            high = mid - 1; // Move to the left half
        }
        else {
            low = mid + 1;  // Move to the right half
        }
    }
    
    return result;
}

int main() {
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;  // Element to find
    
    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);
    
    if (first != -1 && last != -1) {
        printf("First occurrence of %d is at index %d\n", x, first);
        printf("Last occurrence of %d is at index %d\n", x, last);
    } else {
        printf("%d not found in the array\n", x);
    }
    
    return 0;
}
