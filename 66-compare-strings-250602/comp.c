#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[] = "apple";
    char s2[] = "banana";
    int result = strcmp(s1, s2);
    printf("Apple agains Banana is: %d", result);
    return 0;
}
