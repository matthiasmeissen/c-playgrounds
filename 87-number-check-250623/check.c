#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf("Usage: %s <num>\n", argv[0]);
        return EXIT_FAILURE;
    }
    const char * inputValue = argv[1];
    char * endPtr;
    long num = strtol(inputValue, endPtr, 10);
    if (endPtr != '\n') {
        fprintf("Usage: %s <num>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("New number is: %zu\n", num + 10);
    
    return 0;
}
