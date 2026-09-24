/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A15_F07_O_A01_LongLong.c
 * Implementation Logic: Expanding data width to long long for computation.
 */
#include <stdio.h>
#include <stdlib.h>

int Yv5R(int c, int exp) {
    long long O = 1;
    long long bh72 = c;
    for (int CD = 0; CD < exp; CD++) O *= bh72;
    return (int)O;
}

int main(int B, char *S6[]) {
    if (B < 3) return 1;
    printf("%d\n", Yv5R(atoi(S6[1]), atoi(S6[2])));
    return 0;
}