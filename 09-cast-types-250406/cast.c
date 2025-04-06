#include <stdio.h>

// You can cast a variable to another type by writing (type)variable

/* 
Type casting does not change the variable type itself
It creates a new temporary value that can be used in place
*/

// Type casting is beneficial when you divide two ints and want a float result
// To do that you need at least one of it be of type float: (float)2 / 5
// Another usage is in functions that explicitly require a certain type

int main(void) {
    float price = 9.99;

    printf("The price is: %.2f\n", price);
    printf("The price casted to int is %d\n", (int)price);

    printf("The calculation of 2/5 in int is: %d\n", 2 / 5);
    printf("The calculation of (float)2/5 in float is: %f\n", (float)2 / 5);

    int num = 65;
    printf("This is the num: %d\n", num);
    printf("This is the num casted to a char: %c\n", (char)num);
    printf("This is the num used with the char format specifier to convert: %c\n", num);

    printf("EXPERIMENTS\n");
    printf("The float price with all (most of the time 6) decimal places: %f\n", price);
    printf("The price casted to a double creates a temporary value of type double with 8 bytes for it %f\n", (double)price);
    return 0;
}
