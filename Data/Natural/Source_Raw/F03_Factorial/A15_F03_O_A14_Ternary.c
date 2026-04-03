/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A15_F03_O_A14_Ternary.c
 * Implementation Logic: Decrement logic compressed with ternary and comma operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    long long res = 1;
    if (n < 0) return 0;
    for (; n > 1; res *= n, n--);
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}