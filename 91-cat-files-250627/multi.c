#include <stdio.h>
#include <stdlib.h>

void printFile(const char filename[]);

int main(void) {
    printFile("text.md");
    
    return 0;
}

void printFile(const char filename[]) {
    FILE * filePtr = fopen(filename, "r");
    if (filePtr == NULL) {
        perror(filename);
        return EXIT_FAILURE;
    }

    int c;
    while ((c = fgetc(filePtr)) != EOF) {
        fputc(c, filePtr);
    }

    if (fclose(filePtr) != 0) {
        perror(filename);
        return EXIT_FAILURE;
    }
}

