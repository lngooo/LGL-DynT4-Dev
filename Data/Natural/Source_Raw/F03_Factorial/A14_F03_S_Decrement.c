/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A14_F03_S_Decrement.c
 * Implementation Logic: Iterative with decrementing counter (Seed 7).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    while (n > 1) {
        res *= n--;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}