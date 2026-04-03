/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A15_F09_O_A14_ShiftLoops.c
 * Implementation Logic: Fixed-point Newton with nested shift loops.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    long val = n;
    long r = 1;
    while (val > 0) { val >>= 2; r <<= 1; }
    for(int i=0; i<10; i++) {
        if (r == 0) r = 1;
        r = (r + n/r) >> 1;
    }
    return (int)r;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}