/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A01_F47_S_BasicIter.c
 * Implementation Logic: BasicIter
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Ld(char *XvWM, char *u63N) {
    int dh = 0; while (u63N[dh]) dh++;
    for (int p9 = 0; XvWM[p9] != '\0'; p9++) {
        XvWM[p9] ^= u63N[p9 % dh];
    }
}

int main(int zmeE, char *tLxr[]) {
    if (zmeE < 3) return 0;
    char *XvWM = tLxr[1];
    char *u63N = tLxr[2];
    int e6 = 0;
    while (XvWM[e6]) e6++;

    Ld(XvWM, u63N);

    for (int p9 = 0; p9 < e6; p9++) {
        printf("%02x", (unsigned char)XvWM[p9]);
    }
    printf("\n");
    return 0;
}