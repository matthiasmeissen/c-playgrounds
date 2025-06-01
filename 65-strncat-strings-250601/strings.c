#include <stdio.h>
#include <string.h>

// strncat(char *dest, const char *src, size_t n)
// Appends up to n characrers from src to dest, allways null terminates
// char * dest : Pointer to the destinations string array, where to append characters to
// const char * scr : Pointer to the src character array, where the chars that will be appended are stored
// site_t n: The maximum number of characters to append (it adds up to n, when less its also valid)

int main(void) {
    char src[] = "Humans";
    char dest[20] = "Hello";
    strncat(dest, src, 6);
    printf("Dest is now: %s\n", dest);
    return 0;
}
