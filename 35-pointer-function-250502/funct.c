#include <stdio.h>

void add_one(int *num_ptr);

int main(void) {
    int my_var = 20;

    printf("Value of my_var before function call: %d\n", my_var);
    add_one(&my_var);
    printf("Value of my_var after function call: %d\n", my_var);

    return 0;
}

void add_one(int *num_ptr) {
    num_ptr++;
}
