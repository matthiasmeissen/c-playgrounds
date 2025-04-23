#include <stdio.h>

// Variables only exsit in their scope {}
// Even when passed into a function the get copied and then the copy exist only inside there
// Declaring a variable inside {} that has the same name as one outside
// will create a completely new one and shadow (hide) the outer one

void printNum(void);
void modifyAndPrintGlobalNum(void);
void printNumInput(int num);

int globalNum = 20;

int main(void) {
    int num = 20;
    printf("01 - The variable num in main is: %d\n", num);

    globalNum = globalNum + 20;
    printf("02 - The variable globalNum in main is: %d\n", globalNum);

    printNum();

    printNumInput(num);

    modifyAndPrintGlobalNum();

    if (num > 10) {
        int num = 8;
        printf("The value of num inside the if block is: %d\n", num);
    }

    printf("The variable num in main after some functions is: %d\n", num);

    printf("The global variable numGlobal after some functions is: %d\n", globalNum);

    return 0;
}

void printNum(void) {
    int num = 20;
    printf("03 - The variable num inside the function is: %d\n", num);
}

void modifyAndPrintGlobalNum(void) {
    globalNum = 80;
    printf("05 - The variable globalNum inside the function is: %d\n", globalNum);
}

void printNumInput(int num) {
    num = num + 20;
    printf("04 - The input variable num inside the function is: %d\n", num);
}
