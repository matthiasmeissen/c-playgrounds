#include <stdio.h>

// Format specifiers for different data types
// %d for signed decimal integers
// %c for chars (a single character)

int main(void) {
    int number = 2;
    char letter  = 'A';
    char name[] = "Name";
    printf("This is a number: %d\n", number);
    printf("This is a character: %c\n", letter);
    printf("This is a string: %s\n", name);
}
