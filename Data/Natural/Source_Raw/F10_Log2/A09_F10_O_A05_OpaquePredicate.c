/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A09_F10_O_A05_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int p = 0;
    if ((n * n + 1) > 0) {
        if (n >= 65536) { n /= 65536; p += 16; }
        if (n >= 256) { n /= 256; p += 8; }
        if (n >= 16) { n /= 16; p += 4; }
        if (n >= 4) { n /= 4; p += 2; }
        if (n >= 2) { p += 1; }
    }
    return p;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}