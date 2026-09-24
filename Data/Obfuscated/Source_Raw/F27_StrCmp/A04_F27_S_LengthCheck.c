/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A04_F27_S_LengthCheck.c
 * Implementation Logic: Pre-calculates minimum length to bound iterative comparison.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ub(const char *m, const char *GSP) {
    size_t WJI = strlen(m);
    size_t zN = strlen(GSP);
    size_t f = (WJI < zN) ? WJI : zN;
    for(size_t qjTv = 0; qjTv < f; qjTv++) {
        if (m[qjTv] != GSP[qjTv]) return (unsigned char)m[qjTv] - (unsigned char)GSP[qjTv];
    }
    return (unsigned char)m[f] - (unsigned char)GSP[f];
}

int main(int zi6, char *g29V[]) {
    if (zi6 < 3) return 0;
    printf("%d\n", ub(g29V[1], g29V[2]));
    return 0;
}