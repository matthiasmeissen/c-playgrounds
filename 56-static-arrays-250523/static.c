#include <stdio.h>

int main(void) {
    // Declare float array and initialize with 5 items
    // Note: When declared and not directly initialized it is necessary to specify the length with arr[numItems]
    float grades[] = {1, 2, 3, 4, 5};
    // Print the third item, using fprintf intentionally printf() is shorthand for the same thing
    fprintf(stdout, "Third item in grades array has value of: %.2f\n", grades[2]);

    // Trying to access item number 6 which is out of bounds (will crash the program)
    // The compiler might give a warning, but lets you build this
    printf("Item number 6 is: %.2f\n", grades[5]);

    // You can still try to access this with a loop wich seems not to be checked by the compiler
    for (int i = 0; i < 6; i++) {
        // In this case on that machine it prints 0.00 for the 6 item
        // Be aware that this is undefined behavior, it can be anything and might crash the program
        printf("Item number %d is: %.2f\n", i + 1, grades[i]);
    }

    return 0;
}
