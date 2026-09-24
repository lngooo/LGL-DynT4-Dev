/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A14_F47_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Xre(char *korw, char *XvYm) {
    int KqCK = 0, k = 0;
    while(korw[KqCK]) KqCK++; while(XvYm[k]) k++;
    for(int sXI=0; sXI<KqCK; sXI++) {
        for(int Voy=0; Voy<1; Voy++) korw[sXI] ^= XvYm[sXI % k];
    }
}

int main(int AJ, char *r[]) {
    if (AJ < 3) return 0;
    char *korw = r[1];
    char *XvYm = r[2];
    int lmHB = 0;
    while (korw[lmHB]) lmHB++;

    Xre(korw, XvYm);

    for (int sXI = 0; sXI < lmHB; sXI++) {
        printf("%02x", (unsigned char)korw[sXI]);
    }
    printf("\n");
    return 0;
}