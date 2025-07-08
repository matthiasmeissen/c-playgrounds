#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    // Take two arguments (filename, string to search)
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <string> <filename>", argv[0]);
        return EXIT_FAILURE;
    }
    const char * searchString = argv[1];
    const char * fileName = argv[2];
    // Create FILE pointer and open stream in read mode
    FILE * filePtr = fopen(fileName, "r");
    // Check for success
    if (filePtr == NULL) {
        perror(fileName);
        return EXIT_FAILURE;
    }
    printf("File open success.\n-------- \n");

    char buffer[1024];
    int line = 1;
    printf("The string %s was found in:\n", searchString);

    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        if (strstr(buffer, searchString) != NULL) {
            printf("Line %d:    %s", line, buffer);
        }
        line++;
    }

    printf("\n");

    // Close stream
    if (fclose(filePtr) != 0) {
        perror(fileName);
        return EXIT_FAILURE;
    } else {
        printf("-------- \nFile close success.\n");
    }
    return 0;
}
