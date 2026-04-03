/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A07_F05_O_A06_Bitwise.c
 * Implementation Logic: Bit-by-bit method with instruction replacement (e.g., bitwise instead of +/-).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    int r = 0, b = 0x40000000;
    while (b > n) b >>= 2;
    while (b) {
        int t = r | b;
        if (n >= t) {
            n -= t;
            r = (r >> 1) | b;
        } else r >>= 1;
        b >>= 2;
    }
    return r;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}