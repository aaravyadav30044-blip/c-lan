#include <stdio.h>

int main() {
    int num ;
    int factorial = 1;
    int i = num;

    while (i > 1) {
        factorial = factorial * i;
        i -= 1;
    }

    printf("Factorial result: %d\n", factorial);

    return 0;
}
