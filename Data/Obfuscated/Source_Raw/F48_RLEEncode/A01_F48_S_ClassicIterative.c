/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A01_F48_S_ClassicIterative.c
 * Implementation Logic: ClassicIterative
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void X1(const char *R, char *Fh) {
    int AS = 0, XnX = 0, Df = strlen(R);
    while (AS < Df) {
        int V67a = 1;
        while (AS + 1 < Df && R[AS] == R[AS+1]) { V67a++; AS++; }
        XnX += sprintf(Fh + XnX, "%c%d", R[AS], V67a);
        AS++;
    }
}

int main(int tNqk, char *Lskb[]) {
    if (tNqk < 2) return 0;
    char *TS = Lskb[1];
    char fR[256] = {0};
    X1(TS, fR);
    printf("%s\n", fR);
    return 0;
}