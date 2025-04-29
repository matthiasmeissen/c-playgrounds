#include <stdio.h>
#include <stddef.h>

// A pointer stores a memory address
// It needs a data type specified

// It is declared like this: int *ptr = NULL
// The NULL tells that it is empty

// With ptr = &number you store an address in it
// With *ptr you access the value of the address stored

int main(void) {
    int *ptr = NULL;
    printf("Memory Address of ptr               %p\n", &ptr);
    printf("Memory Address stored in ptr        %p\n", ptr);
    // printf("Value stored in reference of ptr    %d\n", *ptr);
    // This generates an error, since there is no refernce in the ptr

    printf("--------\n");

    int number = 20;
    printf("Memory Address of number            %p\n", &number);
    printf("Value stored in number              %d\n", number);

    printf("--------\n");

    // pointer -> memory address -> variable

    ptr = &number;
    printf("Memory Address of ptr               %p\n", &ptr);
    printf("Memory Address stored in ptr        %p\n", ptr);
    printf("Value stored in reference of ptr    %d\n", *ptr);

    return 0;
}
