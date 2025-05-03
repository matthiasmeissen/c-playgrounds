#include <stdio.h>
#include <stddef.h>

// A const modifies the thing left to it (when it is leftmost it modifies right)
// You need to read from right to left

void point_to_const_int(void);
void constant_pointer_to_int(void);

int main(void) {
    point_to_const_int();
    constant_pointer_to_int();

    return 0;
}

void point_to_const_int(void) {
    int y = 5;
    const int * p1 = &y;
    printf("DEBUG: Address stored in p1         %p\n", p1);

    // const int * p1
    // p1 is
    // *: a pointer
    // int: to an int
    // const: that is constant
    // Meaning: p1 is a pointer to a constant integer

    // You cannot change the integer
    // *p1 = 6;

    // But you can change the pointer to point somewhere else
    p1 = NULL;
    printf("DEBUG: Address stored in p1         %p\n", p1);
}

void constant_pointer_to_int(void) {
    int y = 5;
    printf("DEBUG: Value stored in y            %d\n", y);
    int * const p2 = &y;
    printf("DEBUG: Address stored in p2         %p\n", p2);

    // int * const p2
    // p2 is
    // const: a constant
    // *: pointer
    // int: to an int
    // Meaning: p2 is a constant pointer to an integer

    // You can change the integer
    *p2 = 6;
    printf("DEBUG: Value stored in y            %d\n", y);

    // But you cannot change the pointer
    //  p2 = NULL;
}
