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
    printf("Management:         Manual\n");
    printf("Speed:              Slow        ###\n");
    printf("Size:               Large       #########\n");
}

void stack_memory_details(void) {
    printf("---- Stack Memory ----\n");
    printf("Management:         Automatic\n");
    printf("Speed:              Fast        #########\n");
    printf("Size:               Slow        ###\n");
}
