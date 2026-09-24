/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A20_F33_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void sKl(char **T, int qLZk, char *WMTK) {
    int XNKZ = 0;
    while (1) {
        char XQs1 = T[0][XNKZ];
        if (!XQs1) break;
        int f4Hs = 0;
        for (int IY = 1; IY < qLZk; IY++) if (T[IY][XNKZ] != XQs1) { f4Hs = 1; break; }
        if (f4Hs) break;
        WMTK[XNKZ++] = XQs1;
    }
    WMTK[XNKZ] = 0;
}

int main(int LyO, char *jv[]) {
    if (LyO < 2) return 0;
    int s = LyO - 1;
    char **T = &jv[1];
    char X[128] = {0};
    sKl(T, s, X);
    printf("%s\n", X);
    return 0;
}