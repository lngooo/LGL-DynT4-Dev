/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A06_F05_S_BitByBit.c
 * Implementation Logic: Bit-by-bit calculation (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    unsigned int res = 0;
    unsigned int bit = 1 << 30;
    while (bit > n) bit >>= 2;
    while (bit != 0) {
        if (n >= res + bit) {
            n -= res + bit;
            res = (res >> 1) + bit;
        } else {
            res >>= 1;
        }
        bit >>= 2;
    }
    return (int)res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}