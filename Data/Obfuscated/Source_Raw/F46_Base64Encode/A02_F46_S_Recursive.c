/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A02_F46_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hpgW(unsigned char *VgL0, int WPJA, char *X) {
    const char *O = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (WPJA <= 0) { *X = '\0'; return; }
    unsigned int jW8w = VgL0[0] << 16 | (WPJA > 1 ? VgL0[1] << 8 : 0) | (WPJA > 2 ? VgL0[2] : 0);
    X[0] = O[(jW8w >> 18) & 0x3F];
    X[1] = O[(jW8w >> 12) & 0x3F];
    X[2] = WPJA > 1 ? O[(jW8w >> 6) & 0x3F] : '=';
    X[3] = WPJA > 2 ? O[jW8w & 0x3F] : '=';
    hpgW(VgL0 + 3, WPJA - 3, X + 4);
}

int main(int U, char *gLP[]) {
    if (U < 2) return 1;
    unsigned char *VgL0 = (unsigned char *)gLP[1];
    int WPJA = 0;
    while (VgL0[WPJA]) WPJA++;
    char X[400] = {0};
    hpgW(VgL0, WPJA, X);
    printf("%s\n", X);
    return 0;
}