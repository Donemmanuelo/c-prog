#include <stdio.h>

int main() {
    int rows, i, j, value = 1;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 0; i < rows; i++) {
        // Print spaces for proper alignment
        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        
        // Calculate and print the values of Pascal's Triangle
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                value = 1;
            } else {
                value = value * (i - j + 1) / j;
            }
            printf("%4d ", value);
        }
        
        printf("\n");
    }
    
    return 0;
}