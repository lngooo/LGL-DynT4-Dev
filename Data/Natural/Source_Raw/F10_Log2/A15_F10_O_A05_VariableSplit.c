/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A15_F10_O_A05_VariableSplit.c
 * Implementation Logic: VariableSplit
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int high = 0, low = 0;
    if (n >= 65536) { n >>= 16; high = 16; }
    if (n >= 256) { n >>= 8; low = 8; }
    int mid = 0;
    if (n >= 16) { n >>= 4; mid = 4; }
    int rest = 0;
    while(n >>= 1) rest++;
    return high + low + mid + rest;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}