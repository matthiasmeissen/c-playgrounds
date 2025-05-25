#include <stdio.h>

int main(void) {
    // Declare ant initialize rows and cols variables
    int rows = 2;
    int cols = 3;

    // Create two dimensional array based on rows and cols
    int matrix[rows][cols];

    // Use a nested for loop to populate the array with value 0 at each index
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c ++) {
            matrix[r][c] = 0;
        }
    }
    return 0;
}
