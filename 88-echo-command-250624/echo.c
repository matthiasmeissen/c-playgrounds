#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    // Loop through input strings
    // Index 0 - Is alway the program name
    // Index 1 - First Argument
    // Index 2 - Second Argument
    // Has two input arguments, but since name is included argument count is three
    // In order to print only input arguments we start counting at 1, up to length -1 included
    for (int i = 1; i < argc; i++) {
        if (i == argc - 1) {
            // When element is the last from argument count, we remove the space
            printf("%s", argv[i]);
        } else {
            // In the other cases we include them
            printf("%s ", argv[i]);
        }
    }
    // When all inputs are printed, we add a newline
    printf("\n");

    // Alternative that is way more compact
    // It prints the space before for every input that is not the first
    for (int i = 1; i < argc; i++) {
        if (i > 1) {
            printf(" ");
        }
        printf("%s", argv[i]);
    }
    printf("\n");
    
    return 0;
}
