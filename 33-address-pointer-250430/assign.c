#include <stdio.h>
#include <stddef.h>

void pointer1(void);

int main(void) {
    // pointer1();

    int x = 10;
    printf("Memory address of variable x:       %p\n", &x);

    int *ptr = &x;
    printf("Memory address stored in ptr:       %p\n", ptr);

    printf("Value of address stored in ptr:     %d\n", *ptr);

    return 0;
}

void pointer1(void) {
    int *ptr = NULL;
    // Memory address of pointer called ptr
    printf("%p\n", &ptr);
    // Address stored in pointer called ptr
    printf("%p\n", ptr);
    int x = 10;
    // Memory address of variable called x
    printf("%p\n", &x);
    // Store address of x inside ptr
    ptr = &x;
    // Address stored in pointer called ptr
    printf("%p\n", ptr);
}
