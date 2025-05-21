#include <stdio.h>

// You can debug programs either directly in the software or by compiling with flags in the terminal
// To compile a file for debugging you write
// clang -g fileName.c -o desiredBinaryName

// To use the built in debugger you need to open the binary with it
// lldb ./desiredBinaryName
// This will bring you in debugging mode, indicated by (lldb) in front of your commands

// From there you can send instructions on where to add breakpoints
// To set it inside a function you write
// (lldb) breakpoint set --name functionName
// You can also set breakpoints by line number
// (lldb) breakpoint set --file fileName.c --line lineNumber

// When you have all breakpoints set you can run it with
// (lldb) run
// The debugger copys the section of the code it is checking into the terminal
// The arrow in front of a line shows that it is at that place but has not executed it

// From here you can inspect things like variables by writing
// (lldb) print a or p a
// To show all variables within a frame (the current stack) you can write
// (lldb) frame variable

// To step to the next line (also called step over) you write
// (lldb) next or n
// Another way to do this is using the step into command with
// (lldb) step or s
// The difference is that step will go into functions when present
// while next will just execute a function
// You can do this until the program finishes

// You can instruct it to run the program to completion with
// (lldb) continue
// The program will print its output to the console 
// and lldb will tell that the program has exited from here you can quit lldb with
// (lldb) quit

int multiply(int a, int b);

int main(void) {
    int baseNum = 24;
    int newNum = multiply(baseNum, 20);
    fprintf(stdout, "%d times 20 equals: %d\n", baseNum, newNum);
    return 0;
}

/**
 * @brief Multiply and int by another
 * @param a Number 1 
 * @param b Number 2
 * @return a times b
 */
int multiply(int a, int b) {
    int result = a *b ;
    return result;
}
