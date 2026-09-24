/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A01_F33_S_Vertical.c
 * Implementation Logic: Vertical
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void S(char **g, int oA, char *AIVe) {
    if (oA <= 0) return;
    int R = 0;
    while (g[0][R]) {
        char TioV = g[0][R];
        for (int nx = 1; nx < oA; nx++) {
            if (g[nx][R] != TioV) { AIVe[R] = '\0'; return; }
        }
        AIVe[R] = TioV;
        R++;
    }
    AIVe[R] = '\0';
}

int main(int a6L, char *hrPL[]) {
    if (a6L < 2) return 0;
    int nfv7 = a6L - 1;
    char **g = &hrPL[1];
    char Nh[128] = {0};
    S(g, nfv7, Nh);
    printf("%s\n", Nh);
    return 0;
}