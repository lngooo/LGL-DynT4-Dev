/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A13_F47_O_A03_PtrLogic.c
 * Implementation Logic: PtrLogic
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Yq(char *lNc, char *BZe) {
    for(char *u2vg = lNc; *u2vg != 0; u2vg++) {
        int bf12 = (int)(u2vg - lNc);
        int NNKm = 0; while(BZe[NNKm]) NNKm++;
        *u2vg ^= *(BZe + (bf12 % NNKm));
    }
}

int main(int tS, char *c4[]) {
    if (tS < 3) return 0;
    char *lNc = c4[1];
    char *BZe = c4[2];
    int sJ = 0;
    while (lNc[sJ]) sJ++;

    Yq(lNc, BZe);

    for (int Ct = 0; Ct < sJ; Ct++) {
        printf("%02x", (unsigned char)lNc[Ct]);
    }
    printf("\n");
    return 0;
}