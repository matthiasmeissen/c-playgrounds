#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    // Declare variables for start number and printNewline, initialize both to one
    int startNumber = 1;
    int printNewline = 1;

    // This approach checks some cases and sets variables based on them
    // That helps to make the code clear to follow and adjust
    // In this case we check if there are more than 1 arguments and if the second (argv[1]) has the "-n" flag
    // When this is true, we adjust the variables, otherwise they stay as initially defined
    if (argc > 1 && strcmp(argv[1], "-n") == 0) {
        startNumber = 2;
        printNewline = 0;
    }

    // This function loops through the input
    // The startNumber variable determines if the second argument is included or not
    for (int i = startNumber; i < argc; i++) {
        if (i > startNumber) {
            printf(" ");
        }
        printf("%s", argv[i]);
    }

    // The newline is also based on teh flag input
    if (printNewline) {
        printf("\n");
    }

    return 0;
}

void initialApproach(int argc, char * argv[]) {
    // Check if argument count is greater than one
    // And if the second argument (argv[1]) equals to "-n"
    if (argc > 1 && strcmp(argv[1], "-n") == 0){
        // When true loop through inputs
        // Starting from the first input after "-n" flag (argv[2])
        // Do not print a newline here, when done
        for (int i = 2; i < argc; i++) {
            if (i > 2) {
                printf(" ");
            }
            printf("%s", argv[i]);
        }
    } else {
        // When input is less or equal to one and "-n flag is not set
        // Create a for loop that goes through all argc indices
        // And use them to print the string stored in argv[]
        // Exept for the first, which holds the program name
        for (int i = 1; i < argc; i++) {
            // Print a space befor every index, except the first
            if (i > 1) {
                printf(" ");
            }
            printf("%s", argv[i]);
        }
        // Add a newline character after reading all inputs
        printf("\n");
    }
}
