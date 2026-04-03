/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A19_F05_O_A06_Indirect.c
 * Implementation Logic: Bit-by-bit method using function pointers for core steps.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int (*op)(unsigned int);
unsigned int shift(unsigned int v) { return v >> 1; }

int Sqrt(int n) {
    if (n < 0) return -1;
    unsigned int res = 0, bit = 1 << 30;
    op f = shift;
    while (bit > (unsigned int)n) bit >>= 2;
    while (bit) {
        if ((unsigned int)n >= res + bit) {
            n -= (res + bit);
            res = f(res) + bit;
        } else res = f(res);
        bit >>= 2;
    }
    return (int)res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}