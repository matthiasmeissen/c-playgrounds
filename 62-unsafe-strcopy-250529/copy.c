#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Copy Me";
    char dest[50];
    strcpy(src, dest);
    printf("Dest is now: %s\n", dest);
    return 0;
}
