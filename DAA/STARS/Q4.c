#include <stdio.h>

void butterfly(int n) {
    // First half
    for (int i = 1; i <= n; i++) {
        // Stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Second half
    for (int i = n; i >= 1; i--) {
        // Stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    butterfly(4);
    return 0;
}
