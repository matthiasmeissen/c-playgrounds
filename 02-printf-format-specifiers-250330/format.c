#include <stdio.h>

// Format specifiers for different data types
// %d for signed decimal integers
// %c for chars (a single character)

// Note on strings
// While you can have %s as a format specifiers for strings
// There is no string data type
// A string is just an array of chars, with an additional terminator \0 to mark its length

// printf() stands for print formatted and is a function of the standard library
// This means you need to have the #include <stdio.h> in the program
// You can use format specifiers in printf() as placeholders

// There is a special character \n called newline Character and is an excape sequence
// It creates a new line

int main(void) {
    int number = 2;
    char letter  = 'A';
    char name[] = "Name";
    printf("This is a number: %d\n", number);
    printf("This is a character: %c\n", letter);
    printf("This is a string: %s\n", name);
}
