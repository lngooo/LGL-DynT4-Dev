/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A07_F03_O_A06_ManualTail.c
 * Implementation Logic: Manual conversion of tail-recursion to while loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long acc = 1;
    while (1) {
        if (n <= 0) return acc;
        acc *= n;
        n--;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}