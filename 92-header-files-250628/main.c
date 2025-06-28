#include <stdio.h>
#include "utils.h"

int main(void) {
    char myString[] = "Hello";
    int num = mystrlen(myString, sizeof(myString));
    printf("The string %s has %d characters.\n", myString, num);
    
    return 0;
}
