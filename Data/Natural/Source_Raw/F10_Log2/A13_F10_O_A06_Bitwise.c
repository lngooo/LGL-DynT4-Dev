/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A13_F10_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int k = -1;
    unsigned int v = 1;
    while (!(v > (unsigned int)n)) {
        v = v << 1;
        k = k + 1;
        if (v == 0) break;
    }
    return k;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}