/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A21_F33_O_A04_LogicTernary.c
 * Implementation Logic: LogicTernary
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void KNY(char **l4, int gl, char *sX) {
    int XB = 128;
    for(int KJ98=0; KJ98<gl; KJ98++) { int A = strlen(l4[KJ98]); XB = (A < XB) ? A : XB; }
    int J = 0;
    for(int jzOh=0; jzOh<XB; jzOh++) {
        char WA5b = l4[0][jzOh];
        int lVnt = 1;
        for(int HM=1; HM<gl; HM++) lVnt = (l4[HM][jzOh] == WA5b) ? lVnt : 0;
        if(lVnt) { sX[jzOh] = WA5b; J++; } else break;
    }
    sX[J] = '\0';
}

int main(int uQ, char *Pp5[]) {
    if (uQ < 2) return 0;
    int Q5 = uQ - 1;
    char **l4 = &Pp5[1];
    char s[128] = {0};
    KNY(l4, Q5, s);
    printf("%s\n", s);
    return 0;
}