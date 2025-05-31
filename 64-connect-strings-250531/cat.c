#include <stdio.h>
#include <string.h>

// strcat(*dest, *src) appends src character array to dest character array
// Caution: When dest is too small it will crash the program

int main(void) {
    // Declare scr character array without explicit size and initialize with string
    char src[] = "Humans";
    // Declare dest character arry with 20 item, but only initialize some of them with a string
    char dest[20] = "Hello";

    strcat(dest, src);

    printf("%s\n", dest);

    return 0;
}

