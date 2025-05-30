#include <stdio.h>
#include <string.h>

// strncpy() Takes three arguments: 
// *dest: The pointer to copy the characters to
// *src: The pointer where to get the characters from
// n: The number of characters to copy
// Note: When src >= n it will copy all elemnts, but wont add a null terminator
// It also pads all free spaces with a null terminator when src < dest array

int main(void) {
    // Declare character array src and intialize with string
    char src[] = "Copy me";
    // Declare character array dest with implicit size of 10, do not initialize
    char dest[10];
    // Set first item in dest array to null terminator for safety
    dest[0] = '\0';
    // Use strncopy to copy src to dest, use sizeof(dest) - 1 to ensure it does not exceed
    strncpy(dest, src, sizeof(dest) - 1);
    // Manually set last item in dest array to null terminator
    // This is potentially dangerous, since when dest is 0 and we subtract 1 we go negative here, which might crash the program
    dest[sizeof(dest) - 1] = '\0';
    // Print the destination array
    printf("The dest is now: %s\n", dest);

    // Obersvation, the dest array now seems to have two null termiantors
    // Build for loop to check, it seems to have three, index 7 and 9 are explicitly set
    // Index 7 is also a null terminator, which stems from the padding behaviro of the strncpy() function
    for (int i = 0; i < sizeof(dest); i++) {
        // Cast to into to see asci number of the characters
        printf("Index %d of dest is: %d\n", i, (int)dest[i]);
    }

    return 0;
}
