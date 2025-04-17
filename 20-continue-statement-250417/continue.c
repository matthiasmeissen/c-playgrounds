#include <stdio.h>

int main (void) {
    int num = 0;
    for (int i = 1; i < 10; i++){
        if (i % 3 != 0) {
            printf("%d", i);
        } else {
            continue;
        }
    }
    return 0;
}