#include <stdio.h>
#include "utils.h"

#define DEBUG 1

int main(void) {
    int run = 0;
    
    do {
        printf("Welcome to the calculator.\n");
    
        char type = get_calc_type();
        if(DEBUG) { printf("// DEBUG - type: %c\n", type); };
    
        float a = get_float_input();
        if(DEBUG) { printf("// DEBUG - a: %f\n", a); };
    
        float b = get_float_input();
        if(DEBUG) { printf("// DEBUG - b: %f\n", b); };
    
        float result = calculate(type, a, b);
        printf("The sum of %f and %f is %f \n", a, b, result);

        run = get_user_confirm();
        if(DEBUG) { printf("// DEBUG - run: %d\n", run); };
    } while (run);

    return 0;
}
