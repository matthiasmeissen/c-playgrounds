#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * filePtr;
    const char fileName[] = "text.md";
    filePtr = (fileName, "w");
    if (filePtr == NULL) {
        perror("Error while opening the file.\n");
        return EXIT_FAILURE;
    }
    printf("Successfully opened the file %s\n", fileName);

    fputc('H', filePtr);

    if (fclose(fileName) == 0) {
        printf("Successfully closed the file %s\n", fileName);
    } else {
        perror("Error while closing the file.\n");
        return EXIT_FAILURE;
    }
    return 0;
}
