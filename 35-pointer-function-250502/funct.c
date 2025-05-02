#include <stdio.h>
#include <stddef.h>

// This code declares an integer variable and initializes it with 20
// Then it prints its value

// The function add_one(int *num_ptr) has one argument 
// which is the a pointer to some address of an int in memory
// It then accesses the value stored at that address and adds one to it

// We pass it the address of the my_var int, which adds one to the value stored there
// Then we print my_var again to see if it has changed

// The value of this approach is that we can modify a value of a variable directly within the function
// We acchieve this by passing the variables address add_one(&my_var)
// The function receives a copy of that address (pass by value)
// The key is that by dereferncing this copied address (*num_ptr) the function can access and change the original value

void add_one(int *num_ptr);

int main(void) {
    int my_var = 20;

    printf("Value of my_var before function call: %d\n", my_var);
    printf("DEBUG: Memory Address of my_var             %p\n", &my_var);
    add_one(&my_var);
    printf("Value of my_var after function call: %d\n", my_var);

    return 0;
}

void add_one(int *num_ptr) {
    printf("DEBUG: Memory Address of num_ptr            %p\n", &num_ptr);
    printf("DEBUG: Memory Address num_ptr is storing    %p\n", num_ptr);

    // You can not write *num_ptr++
    // Since it would increment the pointer value first
    // And then dereference the original location
    (*num_ptr)++;
}
