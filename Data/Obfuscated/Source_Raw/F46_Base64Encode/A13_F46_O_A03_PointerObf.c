/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A13_F46_O_A03_PointerObf.c
 * Implementation Logic: PointerObf
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Tvwq(unsigned char *B2, int L, char *j2l) {
    const char *n3zV = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    unsigned char *DU = B2;
    char *ld = j2l;
    while (DU < B2 + L) {
        int l8 = (int)(B2 + L - DU);
        *ld++ = n3zV[*DU >> 2];
        *ld++ = n3zV[((*DU & 3) << 4) | (l8 > 1 ? *(DU+1) >> 4 : 0)];
        *ld++ = (l8 > 1) ? n3zV[((*(DU+1) & 15) << 2) | (l8 > 2 ? *(DU+2) >> 6 : 0)] : '=';
        *ld++ = (l8 > 2) ? n3zV[*(DU+2) & 63] : '=';
        DU += 3;
    }
    *ld = 0;
}

int main(int Eg, char *W[]) {
    if (Eg < 2) return 1;
    unsigned char *B2 = (unsigned char *)W[1];
    int L = 0;
    while (B2[L]) L++;
    char j2l[400] = {0};
    Tvwq(B2, L, j2l);
    printf("%s\n", j2l);
    return 0;
}