#include <stdio.h>
#include <stdlib.h>

// The main function can take arguments from the terminal, when program is executed
// int argc is the number of arguments passed to the program
// char * argv[] is an array of pointers to character arrays, each holding an input string
// Note that argv[0] always holds the program name and argv[argc] is always NULL

int main(int argc, char * argv[]) {
    // This program expects exactly one argument
    // The program name counts as one argument, so the program should run, when argc is 2
    // While we could check if argc == 2 it would require to nest the rest of the program code inside and else stamenet
    // Checking error first is called a guard clause and exits the program when not met
    // This avoids unnecessary computation and has a better program structure
    if (argc != 2) {
        // When the program has not exactly 2 input values, print hint to stderr and exit the program
        // While writing the error message like this: Error, please provide an input file: %s <inputFile>
        // It is a convention to write: Usage: %s <inputFile>
        // This helps humans and machines to understand hot the program is supposed to be used
        fprintf(stderr, "Usage: %s <inputFile>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Input file is: %s\n", argv[1]);

    return 0;
}
