#include <stdio.h>
#include <string.h>

void print_char_array_asci(const char * arr, const int len);

// strncat(char *dest, const char *src, size_t n)
// Appends up to n characrers from src to dest, allways null terminates
// char * dest : Pointer to the destinations string array, where to append characters to
// const char * scr : Pointer to the src character array, where the chars that will be appended are stored
// site_t n: The maximum number of characters to append (it adds up to n, when less its also valid)

int main(void) {
    // Declare character array without size and initialize with string (which sets the size)
    char src[] = "Humans";
    // Declare character with size and initialize the first characters with string
    char dest[20] = "Hello ";

    // Print content of character array as string and asci values
    printf("Dest is now: %s\n", dest);
    print_char_array_asci(dest, sizeof(dest));

    // Use strncat() to append at least 7 character from src to dest
    // In this case 7 is exactly the length of src (including null terminator)
    // strncat(dest, src, 7);

    // To be safe that no more characters are appended than the dest array has availables elements
    // You can use sizeof(dest) to get the complete size of the array 
    // And subtract strlen(dest) - 1 which is the number of characters in the array 
    // It goes up to the null terminator (which is why we subtract 1 as well)
    // Be sure to use size_t as a type to avoid negative numbers
    size_t remaining = sizeof(dest) - strlen(dest) - 1;
    strncat(dest, src, remaining);

    // Print content of character array as string and asci values
    printf("Dest is now: %s\n", dest);
    print_char_array_asci(dest, sizeof(dest));

    return 0;
}

void print_char_array_asci(const char * arr, const int len) {
    printf("--- Array as Asci ---\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n---\n");
}
