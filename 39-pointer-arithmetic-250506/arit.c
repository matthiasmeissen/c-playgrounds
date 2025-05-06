#include <stdio.h>

int main(void) {
    int nums[] = {10, 20, 30};

    // Create pointer called p and assing address of first item of num array through decaying
    int * p = nums;

    // Create pointer called pd and assing address of first item of num array through direct memory address
    int *pd = &nums[0];

    // Check to verify that both addresses are actually the same
    if (p == pd) {
        printf("The pointers are the same.\n");
    }

    // Use for loop to print *p and increment three times
    for (int i = 0; i < 3; i++) {
        // Get value stored at memory location the pointer points to through dereferecing
        printf("%d\n", *p);
        
        // This is still a bit weird
        // To get the memory address we can either use p directly or explicitly cast to void * for it
        printf("DEBUG: Address of pointer       p               %p\n", p);
        printf("DEBUG: Address of pointer       (void *)p       %p\n", (void *)p);
        printf("DEBUG: Value stored in address  * p             %d\n", * p);
        
        // This code does not just increment the pointer by one
        // It increments it by one times the length of the data type stored in the array
        // For an int this is typically 4 bytes, a char typically 1 byte and a double typically 8 bytes
        // The result is that it points to the next entry in the array then
        p++;
    }

    // When you subtract the first address from the second it should show the same value as length of int
    int * p1 = &nums[0];
    int * p2 = &nums[1];

    // Subtracting the addresses from each other wont show the length in bytes
    printf("The difference in memory addresses is: %p\n", (void *)(p2 - p1));

    // To show the bytes you need to cast them to char types
    printf("The difference in bytes is: %td\n", (char *)p2 - (char * )p1);
    printf("The length of an int in bytes is: %lu\n", sizeof(int));

    return 0;
}
