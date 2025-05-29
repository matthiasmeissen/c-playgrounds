#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void checked_strcpy(char *dest, const char *src);
void checked_strcpy1(char * dest, const char * src, const size_t dest_len);

int main(void) {
    // Declare character array and intialize with String
    char src[] = "Copy Me";
    // Declare character array only with implicity size
    char dest[50];
    // An unitialized string can give errors, it is best to initialize with null terminator
    dest[0] = '\0';
    // Print the empty dest string
    printf("Dest is initially: %s\n", dest);
    // Use strcpy(*dest, *src) accepts pointers to string arrays and copys one to the other
    strcpy(dest, src);
    // Print the dest string again
    printf("Dest is now: %s\n", dest);

    // To use strcpy() dest needs to be at least the same amount as src, otherwise it will crash the program
    // This oen will work, since it is the same amount
    char dest1[8];
    dest1[0] = '\0';
    strcpy(dest1, src);
    printf("Dest1 is now: %s\n", dest1);

    // This will crash, since memory is not large enough
    char dest2[7];
    dest2[0] = '\0';
    //strcpy(dest2, src);
    printf("Dest2 is now: %s\n", dest2);

    // Use a function to check if dest array is large enough
    char dest3[10];
    dest3[0] = '\0';
    checked_strcpy1(dest3, src, sizeof(dest3));
    printf("Dest3 is now: %s\n", dest3);

    return 0;
}

void checked_strcpy(char *dest, const char *src) {
    // This functin does not work since it is tricky to get the length of an array without a null terminator
    // strlen() counts all values till null terminator
    // sizeof() does not work inside function since it will only pass the pointer to teh array and both will be the same size
    printf("Dest: %zu\n", strlen(dest));
    printf("Src: %zu\n", strlen(src));

    if (strlen(dest) < strlen(src)) {
        fprintf(stderr, "Destination String array is too small.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(dest, src);
}

void checked_strcpy1(char * dest, const char * src, const size_t dest_len) {
    if (dest == NULL || src == NULL) {
        fprintf(stderr, "Either src or dest are NULL.\n");
        exit(EXIT_FAILURE);
    }
    if (dest_len == 0) {
        fprintf(stderr, "Destinaton is empty.\n");
        exit(EXIT_FAILURE);
    }
    if (strlen(src) + 1 > dest_len) {
        fprintf(stderr, "The destination is too small.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(dest, src);
}
