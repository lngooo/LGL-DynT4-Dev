/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A11_F33_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ngt9(char **fD3, int y, char *Oyk) {
    int WxW = 0;
    while (1) {
        char clz = *(fD3[0] + WxW);
        if (!(clz ^ 0)) break;
        int UR = 1, vIR = 1;
        while (UR < y) {
            if (*(fD3[UR] + WxW) ^ clz) { vIR = 0; break; }
            UR++;
        }
        if (vIR) { *(Oyk + WxW) = clz; WxW++; } else break;
    }
    *(Oyk + WxW) = '\0';
}

int main(int sm, char *Q[]) {
    if (sm < 2) return 0;
    int E = sm - 1;
    char **fD3 = &Q[1];
    char tAYr[128] = {0};
    ngt9(fD3, E, tAYr);
    printf("%s\n", tAYr);
    return 0;
}