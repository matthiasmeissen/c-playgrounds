#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    // Check if number of input arguments is exactly 1 (argc includes program name)
    // Exit the program with error messahge to stderr to signal correct usage
    // Using an exit clause helps to terminate the program and write cleaner
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <int (not 0)>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Convert input string to number
    int convertedInputNumber = atoi(argv[1]);

    // Check if input is 0 (meaning the input is not an int)
    // It is not able to distinguish between a real 0 though
    if (convertedInputNumber == 0) {
        fprintf(stderr, "Usage: %s <int (not 0)>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Print the input number + 10 to the console
    printf("The new number is %d\n", convertedInputNumber + 10);

    return 0;
}
