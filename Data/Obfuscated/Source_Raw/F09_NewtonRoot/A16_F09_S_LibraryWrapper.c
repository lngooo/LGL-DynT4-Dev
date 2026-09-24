/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A16_F09_S_LibraryWrapper.c
 * Implementation Logic: Using sqrt() from math.h as the 'Newton' step (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int D(int x) {
    if (x < 0) return -1;
    return (int)sqrt((double)x);
}

int main(int rx, char *GzO7[]) {
    if (rx < 2) return 1;
    printf("%d\n", D(atoi(GzO7[1])));
    return 0;
}