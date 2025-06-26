#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * filePtr;
    const char filename[] = "text.md";
    filePtr = fopen(filename, "r");
    if (filePtr == NULL) {
        perror("Error while opnening the file.");
        return EXIT_FAILURE;
    }
    
    char inputBuffer[100];
    while (fgets(inputBuffer, sizeof(inputBuffer), filePtr) != NULL) {
        printf("%s", inputBuffer);
    }

    if (fclose(filePtr) != 0) {
        perror("Error while opnening the file.");
        return EXIT_FAILURE;
    }
    return 0;
}
