#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <int (not 0)>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int convertedInputNumber = atoi(argv[1]);

    if (convertedInputNumber == 0) {
        fprintf(stderr, "Usage: %s <int (not 0)>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("The new number is %d\n", convertedInputNumber + 10);
    
    return 0;
}
