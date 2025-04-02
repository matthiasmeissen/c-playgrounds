#include <stdio.h>

// The char data type holds a single character
// It is specified with 'c' instead of "Char" for a string
// A character is stored as a number representing the ASCII number of it
// This can be accessed by printing the char as a %d instead

// The modulo operator % shows the remainder of a division
// It is used like this: num % divisor

// You can get an input from the user using scanf()
// It requires that you specify a variable before using it to store the user input there

int main(void) {
    char character = 'A';
    printf("This is a char data type: %c\n", character);
    printf("The char %c is represented by the number %d\n", character, character);

    int num = 248;
    int divisor = 20;
    int remainder = num % divisor;
    printf("The number %d divided by %d has a remainder of %d\n", num, divisor, remainder);

    int num1 = 9;
    if (num1 % 2 == 0) {
        printf("The number %d is even.\n", num1);
    } else {
        printf("The number %d is odd.\n", num1);
    }

    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    if (inputNumber % 2 == 0) {
        printf("The number %d is even.\n", inputNumber);
    } else {
        printf("The number %d is odd.\n", inputNumber);
    }
}
