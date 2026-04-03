/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A16_F09_S_LibraryWrapper.c
 * Implementation Logic: Using sqrt() from math.h as the 'Newton' step (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    return (int)sqrt((double)n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}