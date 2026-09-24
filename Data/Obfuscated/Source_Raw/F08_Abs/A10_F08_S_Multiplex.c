/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A10_F08_S_Multiplex.c
 * Implementation Logic: Multiplexing using sign bit (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

int U5(int ja) {
    int boIw[2] = {ja, -ja};
    int v = (ja < 0);
    return boIw[v];
}

int main(int W, char *VUtg[]) {
    if (W < 2) return 1;
    printf("%d\n", U5(atoi(VUtg[1])));
    return 0;
}