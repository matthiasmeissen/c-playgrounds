#include <stdio.h>
#include <string.h>

// strncpy() Takes three arguments: 
// *dest: The pointer to copy the characters to
// *src: The pointer where to get the characters from
// n: The number of characters to copy
// Note: When src >= n it will copy all elemnts, but wont add a null terminator

int main(void) {
    char src[] = "Copy me";
    char dest[10];
    dest[0] = '\0';
    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest - 1)] = '\0';
    printf("The dest is now: %s\n", dest);
    return 0;
}
