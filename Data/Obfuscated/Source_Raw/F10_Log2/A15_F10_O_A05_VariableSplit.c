/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A15_F10_O_A05_VariableSplit.c
 * Implementation Logic: VariableSplit
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int G2(int F3ke) {
    int upvr = 0, G = 0;
    if (F3ke >= 65536) { F3ke >>= 16; upvr = 16; }
    if (F3ke >= 256) { F3ke >>= 8; G = 8; }
    int JP = 0;
    if (F3ke >= 16) { F3ke >>= 4; JP = 4; }
    int z0pf = 0;
    while(F3ke >>= 1) z0pf++;
    return upvr + G + JP + z0pf;
}

int main(int CZKC, char *F[]) {
    if (CZKC < 2) return 0;
    int F3ke = atoi(F[1]);
    if (F3ke <= 0) return 0; 
    int uhFV = G2(F3ke);
    printf("%d\n", uhFV);
    return 0;
}