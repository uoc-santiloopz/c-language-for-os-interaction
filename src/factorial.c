#include <stdio.h>


int factorial(int n);

int main() {
    /* testing code */
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

/* define your function here (don't forget to declare it) */
int factorial(int n) {
    if (n == 1) {
        return n;
    } else {
        return n * (factorial(n-1));
    }
}