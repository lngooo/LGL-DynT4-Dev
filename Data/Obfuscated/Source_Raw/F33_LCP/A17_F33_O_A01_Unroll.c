/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A17_F33_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void pF7(char **BB9Y, int H, char *h) {
    int BX = 0;
    while (BB9Y[0][BX] && BB9Y[0][BX+1]) {
        int c = 1;
        for (int dH = 1; dH < H; dH++) 
            if (BB9Y[dH][BX] != BB9Y[0][BX] || BB9Y[dH][BX+1] != BB9Y[0][BX+1]) { c = 0; break; }
        if (c) { h[BX] = BB9Y[0][BX]; h[BX+1] = BB9Y[0][BX+1]; BX += 2; } else break;
    }
    if (BB9Y[0][BX]) {
        int c = 1;
        for (int dH = 1; dH < H; dH++) if (BB9Y[dH][BX] != BB9Y[0][BX]) c = 0;
        if (c) { h[BX] = BB9Y[0][BX]; BX++; }
    }
    h[BX] = '\0';
}

int main(int xy, char *Mf03[]) {
    if (xy < 2) return 0;
    int y = xy - 1;
    char **BB9Y = &Mf03[1];
    char RD[128] = {0};
    pF7(BB9Y, y, RD);
    printf("%s\n", RD);
    return 0;
}