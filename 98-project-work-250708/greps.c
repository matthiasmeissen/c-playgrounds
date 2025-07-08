#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    // Take two arguments (filename, string to search)
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <filename> <string>", argv[0]);
        return EXIT_FAILURE;
    }
    const char fileName[] = argv[1];
    const char searchString[] = argv[2];
    // Create FILE pointer and open stream in read mode
    FILE * filePtr = fopen(fileName, "r");
    // Check for success
    if (filePtr == NULL) {
        perror(fileName);
        return EXIT_FAILURE;
    }
    printf("File open success.\n");

    // Close stream
    if (fclose(filePtr) == 0) {
        perror(fileName);
        return EXIT_FAILURE;
    } else {
        printf("File close success.\n");
    }
    return 0;
}
