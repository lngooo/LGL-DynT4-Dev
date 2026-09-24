/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A20_F40_O_A05_MathNoise.c
 * Implementation Logic: Power of 16 calculated via loop.
 */
#include <stdio.h>
#include <string.h>

int O(const char* vtmb) {
    int loh = (int)strlen(vtmb), ck = 0;
    for(int L=0; L<loh; L++) {
        int w = (vtmb[L]|32); w = (w >= 'a') ? (w-'a'+10) : (w-'0');
        int X = 1;
        for(int FZy=0; FZy<(loh-1-L); FZy++) X *= 16;
        ck += w * X;
    }
    return ck;
}

int main(int sKO, char* Z6sE[]) {
    if (sKO < 2) return 0;
    printf("%d", O(Z6sE[1]));
    return 0;
}