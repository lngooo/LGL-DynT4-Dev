/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A21_F48_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void EUS(const char *I, char *O5) {
    int fC = 0, s = 0;
    while (1) {
        if (I[fC] == '\0') break;
        int Ve0N = 0;
        char UpK = I[fC];
        while (I[fC + Ve0N] == UpK) Ve0N++;
        O5[s++] = UpK;
        s += sprintf(O5 + s, "%d", Ve0N);
        fC += Ve0N;
    }
    O5[s] = '\0';
}

int main(int A4Y, char *ZyAi[]) {
    if (A4Y < 2) return 0;
    char *lpuS = ZyAi[1];
    char axoa[256] = {0};
    EUS(lpuS, axoa);
    printf("%s\n", axoa);
    return 0;
}