/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A02_F33_S_Horizontal.c
 * Implementation Logic: Horizontal
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Z(char **YMI, int cE, char *IkQ) {
    if (cE <= 0) return;
    strcpy(IkQ, YMI[0]);
    for (int F = 1; F < cE; F++) {
        int YA = 0;
        while (IkQ[YA] && YMI[F][YA] && IkQ[YA] == YMI[F][YA]) YA++;
        IkQ[YA] = '\0';
    }
}

int main(int gfG, char *Kr[]) {
    if (gfG < 2) return 0;
    int B = gfG - 1;
    char **YMI = &Kr[1];
    char wWC[128] = {0};
    Z(YMI, B, wWC);
    printf("%s\n", wWC);
    return 0;
}