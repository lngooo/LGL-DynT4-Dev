/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A05_F10_S_BitPattern.c
 * Implementation Logic: BitPattern
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int pos = 0;
    if (n >= 1 << 16) { n >>= 16; pos += 16; }
    if (n >= 1 << 8) { n >>= 8; pos += 8; }
    if (n >= 1 << 4) { n >>= 4; pos += 4; }
    if (n >= 1 << 2) { n >>= 2; pos += 2; }
    if (n >= 1 << 1) { pos += 1; }
    return pos;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}