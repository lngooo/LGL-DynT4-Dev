/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A04_F08_S_BitwiseTwiddle.c
 * Implementation Logic: (n ^ mask) - mask where mask = n >> 31 (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

int F8(int HHY) {
    int kxi = HHY >> (sizeof(int) * 8 - 1);
    return (HHY ^ kxi) - kxi;
}

int main(int U4h, char *v[]) {
    if (U4h < 2) return 1;
    printf("%d\n", F8(atoi(v[1])));
    return 0;
}