#include <stdio.h>

// A constant is a read only variable. It can not be changed once declared.
// You create one by writing const int VARIABLE_NAME = val;
// As a convention in C a const variable is written all caps with underscores in between
// You use a const to prevent accidential modification of a variable

// A note on format specifiers
// On this system it is possible to use both %lu and %zu to show unsigned integers
// The format specifier %zu is specifically designed for size_t which is the data type of sizeof()
// Using %lu might work on this system, but is not guaranteed to work everywhere, so avoid it

int main(void) {
    const int SECONDS_PER_MINUTE = 60;
    int num = 20;

    // Trying to assing a new value to a const leads to compile errors
    // SECONDS_PER_MINUTE = 40;

    printf("SECONDS_PER_MINUTE is a read-only variable: %d\n", SECONDS_PER_MINUTE);
    printf("Num is a regular variable: %d\n", num);

    num = 40;
    printf("This means num can be changed to %d\n", num);

    printf("A read-only variable of type int uses %lu bytes on that system.\n", sizeof(SECONDS_PER_MINUTE));
    printf("A variable of type int uses %zu bytes on that system.\n", sizeof(num));
    
    return 0;
}
