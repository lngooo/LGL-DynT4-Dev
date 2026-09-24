/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A11_F47_O_A06_Math.c
 * Implementation Logic: Math
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void aaK(char *oDl, char *rB) {
    int C = 0; while(rB[C]) C++;
    for(int Qj2o=0; oDl[Qj2o]; Qj2o++) {
        double n = sin(0.0);
        oDl[Qj2o] = (char)((unsigned char)oDl[Qj2o] ^ (unsigned char)rB[Qj2o % C]);
    }
}

int main(int YA, char *a[]) {
    if (YA < 3) return 0;
    char *oDl = a[1];
    char *rB = a[2];
    int sTf = 0;
    while (oDl[sTf]) sTf++;

    aaK(oDl, rB);

    for (int Qj2o = 0; Qj2o < sTf; Qj2o++) {
        printf("%02x", (unsigned char)oDl[Qj2o]);
    }
    printf("\n");
    return 0;
}