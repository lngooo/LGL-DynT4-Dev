/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A04_F47_S_TwoWay.c
 * Implementation Logic: TwoWay
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void So3(char *wau, char *UX) {
    int gL = 0, t = 0;
    while(wau[gL]) gL++; while(UX[t]) t++;
    int Q1 = 0, H = gL - 1;
    while(Q1 <= H) {
        wau[Q1] ^= UX[Q1 % t];
        if(Q1 != H) wau[H] ^= UX[H % t];
        Q1++; H--;
    }
}

int main(int F6LD, char *qD[]) {
    if (F6LD < 3) return 0;
    char *wau = qD[1];
    char *UX = qD[2];
    int xS = 0;
    while (wau[xS]) xS++;

    So3(wau, UX);

    for (int ijf = 0; ijf < xS; ijf++) {
        printf("%02x", (unsigned char)wau[ijf]);
    }
    printf("\n");
    return 0;
}