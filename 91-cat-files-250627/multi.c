#include <stdio.h>
#include <stdlib.h>

int printFile(const char filename[]);
void process_File(FILE * stream, const char fileName[]);

int main(int argc, char * argv[]) {
    // Check if argc is less then two, print usage instructions
    if (argc == 1) {
        process_File(stdin, "(stdin)");
    } else {
        int error = 0;
        // Loop through all argument values, excluding first (program name)
        for (int i = 1; i < argc; i++) {
            const char * fileName = argv[i];
            FILE * filePtr = fopen(fileName, "r");
            if (filePtr == NULL) {
                perror(fileName);
                error = 1;
                continue;
            }
            process_File(filePtr, fileName);
            fclose(filePtr);
        }
        if (error) {
            return EXIT_FAILURE;
        }
    }

    return 0;
}

void process_File(FILE * stream, const char fileName[]) {
    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), stream) != NULL) {
        fputs(buffer, stdout);
    }

    if(ferror(stream)) {
        perror(fileName);
    }
}

int printFile(const char filename[]) {
    // Create variable for filepointer and store resolut of fopen() in it
    FILE * filePtr = fopen(filename, "r");
    // Check for success, show error message including filename 
    // Return 1 for error henadling outside of function
    if (filePtr == NULL) {
        perror(filename);
        return 1;
    }

    // Loop through all characters in the file until EOF is present
    // Print them to stdout
    int c;
    while ((c = fgetc(filePtr)) != EOF) {
        fputc(c, stdout);
    }

    // Close the file and check for succes, otherwise show error 
    // Return 1 to handle errror outside the function
    if (fclose(filePtr) != 0) {
        perror(filename);
        return 1;
    }

    // Return 0 to show success
    return 0;
}

