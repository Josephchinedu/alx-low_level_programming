#include <stdio.h>

int main() {
    // initialize variables
    int a = 1, b = 2, c;

    // print the first two Fibonacci numbers
    printf("%d %d, ", a, b);

    // loop to find and print the next 96 Fibonacci numbers
    for (int i = 2; i < 98; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    // print a new line at the end
    printf("\n");

    return 0;
}
