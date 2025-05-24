#include <stdio.h>

int main(void) {
    int grades[] = {2, 4, 5, 3, 1};
    int arrayLength = 5;
    int sum;
    for (int i = 0; i < arrayLength; i ++) {
        sum += grades[i];
    }
    int average = sum / arrayLength;
    printf("The average grade is: %d", average);
    
    return 0;
}
