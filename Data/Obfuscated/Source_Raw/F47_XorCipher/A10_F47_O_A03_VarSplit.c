/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A10_F47_O_A03_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Dff(char *y2, char *S) {
    char *A = y2;
    int H = 0, DF = 0;
    int u = 0; while(S[u]) u++;
    while(*A) {
        *A ^= S[(H + DF) % u];
        A++; H++;
    }
}

int main(int rzh7, char *dEB3[]) {
    if (rzh7 < 3) return 0;
    char *y2 = dEB3[1];
    char *S = dEB3[2];
    int zs = 0;
    while (y2[zs]) zs++;

    Dff(y2, S);

    for (int TH = 0; TH < zs; TH++) {
        printf("%02x", (unsigned char)y2[TH]);
    }
    printf("\n");
    return 0;
}