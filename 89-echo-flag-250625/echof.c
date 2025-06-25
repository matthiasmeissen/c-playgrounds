#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
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

    return 0;
}
