#include <stdio.h>
#include <string.h>

void print_character_array_asci(const char * arr, const size_t len);

// strcat(*dest, *src) concatinates (appends) src character array to dest character array
// Caution: When dest is too small it will crash the program

int main(void) {
    // Declare scr character array without explicit size and initialize with string
    char src[] = "Humans";
    // Declare dest character arry with 20 item, but only initialize some of them with a string
    char dest[20] = "Hello ";

    print_character_array_asci(dest, sizeof(dest));

    // Use strcat() to append src to dest
    strcat(dest, src);
    // Print dest
    printf("%s\n", dest);

    print_character_array_asci(dest, sizeof(dest));

    // Declare dest_short array with no extra scpae for new characters
    char dest_short[] = "Hello ";
    // Try to use strcat() to append src to dest_short 
    // This will create a buffer overflow and result in undefined behavior
    strcat(dest_short, src);
    // Print dest_short
    printf("%s\n", dest_short);

    return 0;
}

/**
 * @brief Print asci code for each item in character array
 * @param arr Pointer to character array
 * @param len Size of the array
 */
void print_character_array_asci(const char * arr, const size_t len) {
    printf("---\n");
    printf("The character array contains the following asci values:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", (int)arr[i]);
    }
    printf("\n---\n");
}
