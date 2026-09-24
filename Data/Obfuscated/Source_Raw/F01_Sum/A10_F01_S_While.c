/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A10_F01_S_While.c
 * Implementation Logic: Iterative approach using a while loop (Seed 4).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int kDa9(int GWl) {
    int O = 0;
    while (GWl > 0) {
        O += GWl;
        GWl--;
    }
    return O;
}

int main(int OGM, char *jx[]) {
    if (OGM < 2) return 1;
    printf("%d\n", kDa9(atoi(jx[1])));
    return 0;
}