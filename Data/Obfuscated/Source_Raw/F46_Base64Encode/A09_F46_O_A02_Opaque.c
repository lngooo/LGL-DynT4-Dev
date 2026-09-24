/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A09_F46_O_A02_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void b(unsigned char *nd0G, int hxyZ, char *WPE) {
    if (hxyZ <= 0) { *WPE = '\0'; return; }
    const char *EQ = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if ((hxyZ * hxyZ + hxyZ) % 2 == 0) {
        unsigned int n = nd0G[0] << 16 | (hxyZ > 1 ? nd0G[1] << 8 : 0) | (hxyZ > 2 ? nd0G[2] : 0);
        WPE[0] = EQ[(n >> 18) & 0x3F];
        WPE[1] = EQ[(n >> 12) & 0x3F];
        WPE[2] = hxyZ > 1 ? EQ[(n >> 6) & 0x3F] : '=';
        WPE[3] = hxyZ > 2 ? EQ[n & 0x3F] : '=';
        b(nd0G + 3, hxyZ - 3, WPE + 4);
    }
}

int main(int F, char *toH[]) {
    if (F < 2) return 1;
    unsigned char *nd0G = (unsigned char *)toH[1];
    int hxyZ = 0;
    while (nd0G[hxyZ]) hxyZ++;
    char WPE[400] = {0};
    b(nd0G, hxyZ, WPE);
    printf("%s\n", WPE);
    return 0;
}