/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A07_F46_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void oQ(unsigned char *otJ, int f, char *u) {
    const char *h = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int FAq = 0, FG = 0;
huEp:
    if (FAq >= f) goto uVW;
    u[FG++] = h[otJ[FAq] >> 2];
    u[FG++] = h[((otJ[FAq] & 3) << 4) | (FAq+1 < f ? otJ[FAq+1] >> 4 : 0)];
    if (FAq + 1 >= f) { u[FG++] = '='; u[FG++] = '='; goto uVW; }
    u[FG++] = h[((otJ[FAq+1] & 15) << 2) | (FAq+2 < f ? otJ[FAq+2] >> 6 : 0)];
    if (FAq + 2 >= f) { u[FG++] = '='; goto uVW; }
    u[FG++] = h[otJ[FAq+2] & 63];
    FAq += 3;
    goto huEp;
uVW:
    u[FG] = '\0';
}

int main(int C, char *vZgi[]) {
    if (C < 2) return 1;
    unsigned char *otJ = (unsigned char *)vZgi[1];
    int f = 0;
    while (otJ[f]) f++;
    char u[400] = {0};
    oQ(otJ, f, u);
    printf("%s\n", u);
    return 0;
}