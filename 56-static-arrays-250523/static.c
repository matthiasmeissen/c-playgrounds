#include <stdio.h>

int main(void) {
    // Declare float array and initialize with 5 items
    // Note: When declared and not directly initialized it is necessary to specify the length with arr[numItems]
    float grades[] = {1, 2, 3, 4, 5};
    // Print the third item, using fprintf intentionally printf() is shorthand for the same thing
    fprintf(stdout, "Third item in grades array has value of: %.2f\n", grades[2]);

    // Trying to access item number 6 which is out of bounds (will crash the program)
    printf("Item number 6 is: %f\n", grades[5]);

    return 0;
}
