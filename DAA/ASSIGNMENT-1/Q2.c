/*•	Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ 
and also delete an element from jth position of ‘a1’.*/
#include <stdio.h>

void insertElement(int arr[], int n, int element, int pos) {
    if (pos > n || pos < 0) {
        printf("Invalid position for insertion!\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element; // Insert the element
}

void deleteElement(int arr[], int n, int pos) {
    if (pos >= n || pos < 0) {
        printf("Invalid position for deletion!\n");
        return;
    }

    // Shift elements to the left to fill the gap of the deleted element
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int n, i, j, element;
    
    int a1[100];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int k = 0; k < n; k++) {
        scanf("%d", &a1[k]);
    }


    printf("Enter the position to insert an element (0-based index): ");
    scanf("%d", &i);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    
    insertElement(a1, n, element, i);
    n++;  

   
    printf("Array after insertion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

   
    printf("Enter the position to delete an element (0-based index): ");
    scanf("%d", &j);
    
    
    deleteElement(a1, n, j);
    n--;  

   
    printf("Array after deletion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    return 0;
}

