/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A04_F03_S_Recursive.c
 * Implementation Logic: Classic recursive implementation (Seed 2).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long vA(int sQ8z) {
    if (sQ8z <= 0) return 1;
    return (long long)sQ8z * vA(sQ8z - 1);
}

int main(int D, char *u[]) {
    if (D < 2) return 1;
    int sQ8z = atoi(u[1]);
    if (sQ8z < 0) printf("0\n");
    else printf("%lld\n", vA(sQ8z));
    return 0;
}