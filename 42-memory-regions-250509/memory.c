#include <stdio.h>

void heap_memory_details(void);
void stack_memory_details(void);

int main(void) {
    heap_memory_details();
    stack_memory_details();

    return 0;
}

void heap_memory_details(void) {
    printf("---- Heap Memory ----\n");
    printf("Management:         Manual          Explicit\n");
    printf("Speed:              Slow            ###\n");
    printf("Size:               Large           #########\n");

    // Heap Memory is explicitly declared, 
    // has larger space, but its allocation and deallocation is slow
}

void stack_memory_details(void) {
    printf("---- Stack Memory ----\n");
    printf("Management:         Automatic       Function Variables\n");
    printf("Speed:              Fast            #########\n");
    printf("Size:               Small           ###\n");

    // Stack memory gets automatically declared (like inside functions), 
    // has limited space, but its allocation and deallocation is fast
}
