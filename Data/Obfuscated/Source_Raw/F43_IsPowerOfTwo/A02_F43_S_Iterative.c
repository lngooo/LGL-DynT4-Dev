/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A02_F43_S_Iterative.c
 * Implementation Logic: Naive iterative division. Repeatedly divide by 2 while the number is even.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int vUw(unsigned int gk) {
    if (gk == 0) return 0;
    while (gk % 2 == 0) {
        gk /= 2;
    }
    return gk == 1;
}

int main(int a, char* zi[]) {
    if (a < 2) return 0;
    unsigned int gk = (unsigned int)strtoul(zi[1], NULL, 10);
    printf("%d", vUw(gk));
    return 0;
}