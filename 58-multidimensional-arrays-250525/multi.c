#include <stdio.h>

// Understand the matrix
//
//      c0      c1      c2
//  r0  [0][0]  [0][1]  [0,2]
//  r1  [1][0]  [1][1]  [1,2]
//

// You could declare variables for ROWS and COLS
// But this will create VLAs (Variable Array Length)
// This feature as not available in all compilers or some embedded contexts
// So it is best to use defines for that
// A define is a compile time constant that does not change while to program runs

#define ROWS 2
#define COLS 3

int main(void) {
    // Create two dimensional array based on ROWS and COLS
    int matrix1[ROWS][COLS];

    // Use a nested for loop to populate the array with value 0 at each index
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c ++) {
            matrix1[r][c] = 0;
        }
    }

    // The approach befor word fine, but requires a lot of steps
    // To declare an array and initialize it with the same number you can just use arr[nums] = {0}
    // This works for more than one dimension as well
    int matrix[ROWS][COLS] = {0};

    // When you need specific values, you can do it like that
    int matrix2[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print first item to console
    printf("Element at row 1 and column 2 is: %d\n", matrix[1][2]);
    printf("\n---\n");

    // Print first row to console
    for (int c = 0; c < COLS; c ++) {
       printf("%d ",matrix[0][c]);
    }
    printf("\n---\n");

    // Print complete matrix to console
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c ++) {
            printf("%d ",matrix[r][c]);
        }
        printf("\n");
    }
    printf("---\n");

    // Populate the matrix with increasing numbers and print it
    int num = 0;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c ++) {
            matrix[r][c] = num;
            num++;
            printf("%d ",matrix[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
