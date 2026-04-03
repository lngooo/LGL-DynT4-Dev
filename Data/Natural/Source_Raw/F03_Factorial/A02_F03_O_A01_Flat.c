/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A02_F03_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    int i = 1, state = 0;
    while (state != 2) {
        switch (state) {
            case 0: state = (i <= n) ? 1 : 2; break;
            case 1: res *= i; i++; state = 0; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}