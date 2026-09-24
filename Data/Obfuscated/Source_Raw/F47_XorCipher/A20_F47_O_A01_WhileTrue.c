/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A20_F47_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void y(char *WnKA, char *tR) {
    int SG = 0, zbV2 = 0;
    while(tR[zbV2]) zbV2++;
    while(1) {
        if(!WnKA[SG]) break;
        WnKA[SG] ^= tR[SG % zbV2];
        SG++;
    }
}

int main(int ZOu, char *Q[]) {
    if (ZOu < 3) return 0;
    char *WnKA = Q[1];
    char *tR = Q[2];
    int Kii = 0;
    while (WnKA[Kii]) Kii++;

    y(WnKA, tR);

    for (int SG = 0; SG < Kii; SG++) {
        printf("%02x", (unsigned char)WnKA[SG]);
    }
    printf("\n");
    return 0;
}