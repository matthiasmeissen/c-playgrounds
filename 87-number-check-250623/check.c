#include <stdio.h>
#include <stdlib.h>

// How strol() works
// It parses the input string until it finds an invalid character
// Invalid is anything that is not a number

// Example 1: 123abc
// It parses 1, 2, 3 and at a it detects a nonvalid character
// The *endPtr now holds 'a' which is not '\0' so we return an error

// Example 2: 123
// It parses 1, 2, 3 and at '\0' it detects a nonvalid character 
// This is the null terminator, which signals the end of a string (this is what we want)
// The *endPtr now holds '\0' which is what we want, so we continue

int main(int argc, char * argv[]) {
    // Check if input is exactly 2 using exit clause
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <num>\n", argv[0]);
        return EXIT_FAILURE;
    }
    // Store input value as pointer to character array
    char * inputValue = argv[1];
    // Create pointer variable for endPtr
    char * endPtr = NULL;

    // Call strtol and store result in variable
    // It will store the value of the last element it checked in endPtr
    // &endPtr:     type pointer        Address of Pointer variable
    // endPtr:      type pointer        Pointer stored in Pointer variable
    // *endPtr:     type character      Value stored at Pointer
    long num = strtol(inputValue, &endPtr, 10);

    // Check if value stored at pointer is not null terminator
    if (*endPtr != '\0') {
        fprintf(stderr, "Usage: %s <num>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("New number is: %ld\n", num + 10);

    return 0;
}
