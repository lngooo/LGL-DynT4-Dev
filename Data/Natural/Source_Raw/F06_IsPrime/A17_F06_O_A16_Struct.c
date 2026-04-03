/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A17_F06_O_A16_Struct.c
 * Implementation Logic: Primality test using structs to wrap logic and state.
 */
#include <stdio.h>
#include <stdlib.h>

struct Checker { int val; int result; };

int IsPrime(int n) {
    struct Checker c = {n, 1};
    if (c.val < 2) return 0;
    for (int i = 2; i * i <= c.val; i++) {
        if (c.val % i == 0) { c.result = 0; break; }
    }
    return c.result;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}