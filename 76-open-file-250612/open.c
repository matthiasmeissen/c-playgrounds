#include <stdio.h>

int main(void) {
    // Create new pointer variable of datatype FILE and initilialize to NULL
    FILE * filePtr = NULL;

    // Use fopen("filename", "mode") to open a file, store return value in pointer
    filePtr = fopen("text.md", "r");

    // Check if opening was succssfull
    if (filePtr != NULL) {
        printf("File opened successfully.\n");
    } else {
        fprintf(stderr, "Failed opening the file.\n");
    }
    
    return 0;
}
