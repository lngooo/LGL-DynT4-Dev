/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A18_F33_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void u(char **g8, int Xn, char *vwd) {
    if (Xn <= 1) { if(Xn==1) strcpy(vwd, g8[0]); return; }
    char GJlB[128]={0}, F[128]={0};
    u(g8, Xn/2, GJlB); u(g8 + Xn/2, Xn - Xn/2, F);
    int BWJP = 0;
Nn:
    if (GJlB[BWJP] && GJlB[BWJP] == F[BWJP]) { vwd[BWJP] = GJlB[BWJP]; BWJP++; goto Nn; }
    vwd[BWJP] = 0;
}

int main(int sV9, char *h[]) {
    if (sV9 < 2) return 0;
    int t5 = sV9 - 1;
    char **g8 = &h[1];
    char Y[128] = {0};
    u(g8, t5, Y);
    printf("%s\n", Y);
    return 0;
}