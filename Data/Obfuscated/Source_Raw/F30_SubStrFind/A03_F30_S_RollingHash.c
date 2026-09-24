/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A03_F30_S_RollingHash.c
* Implementation Logic: A simplified Rabin-Karp approach using additive rolling hash.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int D(char* VvpM, char* cutJ) {
    int nNAg = strlen(VvpM), R = strlen(cutJ);
    if (R == 0) return 0;
    int L3 = 0, G = 0;
    for (int eGlD = 0; eGlD < R; eGlD++) {
        L3 += cutJ[eGlD];
        G += VvpM[eGlD];
    }
    for (int eGlD = 0; eGlD <= nNAg - R; eGlD++) {
        if (L3 == G) {
            if (strncmp(&VvpM[eGlD], cutJ, R) == 0) return eGlD;
        }
        if (eGlD < nNAg - R) G = G - VvpM[eGlD] + VvpM[eGlD + R];
    }
    return -1;
}

int main(int SKy, char* q[]) {
    if (SKy < 3) return 0;
    printf("%d\n", D(q[1], q[2]));
    return 0;
}