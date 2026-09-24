/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A03_F46_S_UnionLogic.c
 * Implementation Logic: UnionLogic
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void OD0(unsigned char *x6a, int e, char *Cv) {
    const char *vH = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    union { unsigned char Th[3]; unsigned int E; } JH;
    int HVaE = 0, XD = 0;
    while (HVaE < e) {
        JH.E = 0;
        int T = 0;
        for(int Dh=0; Dh<3 && HVaE<e; Dh++, HVaE++, T++) JH.Th[2-Dh] = x6a[HVaE];
        Cv[XD++] = vH[(JH.E >> 18) & 0x3F];
        Cv[XD++] = vH[(JH.E >> 12) & 0x3F];
        Cv[XD++] = (T > 1) ? vH[(JH.E >> 6) & 0x3F] : '=';
        Cv[XD++] = (T > 2) ? vH[JH.E & 0x3F] : '=';
    }
    Cv[XD] = '\0';
}

int main(int gBbJ, char *X[]) {
    if (gBbJ < 2) return 1;
    unsigned char *x6a = (unsigned char *)X[1];
    int e = 0;
    while (x6a[e]) e++;
    char Cv[400] = {0};
    OD0(x6a, e, Cv);
    printf("%s\n", Cv);
    return 0;
}