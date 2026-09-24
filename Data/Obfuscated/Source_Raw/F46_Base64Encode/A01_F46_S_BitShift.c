/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A01_F46_S_BitShift.c
 * Implementation Logic: BitShift
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void jgTU(unsigned char *ddmk, int S, char *gM) {
    const char J0LN[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int f, Z;
    for (f = 0, Z = 0; f < S; f += 3, Z += 4) {
        gM[Z] = J0LN[ddmk[f] >> 2];
        gM[Z+1] = J0LN[((ddmk[f] & 0x03) << 4) | ((f+1 < S) ? (ddmk[f+1] >> 4) : 0)];
        gM[Z+2] = (f+1 < S) ? J0LN[((ddmk[f+1] & 0x0F) << 2) | ((f+2 < S) ? (ddmk[f+2] >> 6) : 0)] : '=';
        gM[Z+3] = (f+2 < S) ? J0LN[ddmk[f+2] & 0x3F] : '=';
    }
    gM[Z] = '\0';
}

int main(int c8a, char *t6[]) {
    if (c8a < 2) return 1;
    unsigned char *ddmk = (unsigned char *)t6[1];
    int S = 0;
    while (ddmk[S]) S++;
    char gM[400] = {0};
    jgTU(ddmk, S, gM);
    printf("%s\n", gM);
    return 0;
}