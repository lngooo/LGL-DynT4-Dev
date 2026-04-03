/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A13_F09_O_A12_PointerCast.c
 * Implementation Logic: Magic guess Newton with heavy pointer aliasing.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    float f = (float)n;
    unsigned int *p = (unsigned int *)&f;
    *p = 0x1fbd1df5 + (*p >> 1);
    long val = (long)f;
    if (val <= 0) val = 1;
    for(int i=0; i<3; i++) val = (val + n/val) >> 1;
    return (int)val;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}