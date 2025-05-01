#include <stdio.h>
#include <stddef.h>

int main(void) {
    int x = 20;
    int *ptr = NULL;
    ptr = &x;
    printf("The value of x through pointer ptr is: %d", *ptr);
    printf("The value of x is: %d", x);

    *ptr = 40;
    printf("The value of x is now: %d", x);
    return 0;
}
