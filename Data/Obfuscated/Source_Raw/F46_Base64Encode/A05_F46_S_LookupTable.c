/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A05_F46_S_LookupTable.c
 * Implementation Logic: LookupTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lk0h(unsigned char *LcYy, int Jw2D, char *zQE) {
    const char *y = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int RRwe = 0, NShp = 0; RRwe < Jw2D; RRwe += 3) {
        unsigned char SV8 = LcYy[RRwe], fu = (RRwe+1 < Jw2D) ? LcYy[RRwe+1] : 0, V = (RRwe+2 < Jw2D) ? LcYy[RRwe+2] : 0;
        zQE[NShp++] = y[SV8 >> 2];
        zQE[NShp++] = y[((SV8 & 0x03) << 4) | (fu >> 4)];
        zQE[NShp++] = (RRwe+1 < Jw2D) ? y[((fu & 0x0F) << 2) | (V >> 6)] : '=';
        zQE[NShp++] = (RRwe+2 < Jw2D) ? y[V & 0x3F] : '=';
    }
    zQE[((Jw2D + 2) / 3) * 4] = '\0';
}

int main(int A, char *jye[]) {
    if (A < 2) return 1;
    unsigned char *LcYy = (unsigned char *)jye[1];
    int Jw2D = 0;
    while (LcYy[Jw2D]) Jw2D++;
    char zQE[400] = {0};
    lk0h(LcYy, Jw2D, zQE);
    printf("%s\n", zQE);
    return 0;
}