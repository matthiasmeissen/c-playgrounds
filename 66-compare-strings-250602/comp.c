#include <stdio.h>
#include <string.h>

// strcmp(const char * s1, const char * s2) compares s1 against s2
// It loops through the array and for each index i it compares the asci value of s1[i] against s2[i]
// When all indexes are the same it returns 0
// As soon there is a non matching character it calculates the difference between asci number s1[i] and asci number s2[i]
// This means s1[i] - s2[i] and can be <0 or >0 depending on the difference

int main(void) {
    // Declare two integer arrays and initialize each of them with a string
    char s1[] = "apple";
    char s2[] = "banana";
    char s3[] = "coke";

    // Get the number of charactes in each string (excluding null terminator)
    size_t ls1 = strlen(s1);
    size_t ls2 = strlen(s2);
    size_t ls3 = strlen(s3);

    // Compare s1 against s2 and print the result
    int result_a = strcmp(s1, s2);
    printf("Apple agains Banana is:         %d\n", result_a);

    // Print the number of chars in each string
    // S1 (apple) has one character less than s2 (banana)
    // This aligns with strcmp() returning -1
    printf("Num chars in s1 (apple) is      %zu\n", ls1);
    printf("Num chars in s2 (banana) is     %zu\n", ls2);
    printf("The difference is:              %d\n", (int)ls1 - (int)ls2);

    printf("---\n");

    // Compare s1 against s1 and print the result
    int result_b = strcmp(s1, s1);
    printf("Apple agains Apple is:          %d\n", result_b);

    // Check difference again
    printf("The difference is:              %d\n", (int)ls1 - (int)ls1);

    printf("---\n");

    // Compare s2 against s1 and print the result
    int result_c = strcmp(s2, s1);
    printf("Banana agains Apple is:         %d\n", result_c);

    // Check difference again
    printf("The difference is:              %d\n", (int)ls2 - (int)ls1);

    printf("---\n");

    // Compare s1 against s3 and print the result
    int result_d = strcmp(s1, s3);
    printf("Apple agains Coke is:           %d\n", result_d);

    // Check difference again
    printf("The difference is:              %d\n", (int)ls1 - (int)ls3);

    return 0;
}
