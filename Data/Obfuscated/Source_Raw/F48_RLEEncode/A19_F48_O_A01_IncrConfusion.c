/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A19_F48_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void vU(const char *imd7, char *MD) {
    int q2b = -1, W = 0;
    while (imd7[++q2b]) {
        int FcGU = 1;
        while (imd7[q2b + FcGU] == imd7[q2b]) FcGU++;
        MD[W++] = imd7[q2b];
        W += sprintf(MD + W, "%d", FcGU);
        q2b += (FcGU - 1);
    }
}

int main(int cMkc, char *M[]) {
    if (cMkc < 2) return 0;
    char *I = M[1];
    char off[256] = {0};
    vU(I, off);
    printf("%s\n", off);
    return 0;
}