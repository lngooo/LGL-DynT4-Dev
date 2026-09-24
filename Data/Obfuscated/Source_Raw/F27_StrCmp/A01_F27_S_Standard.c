/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A01_F27_S_Standard.c
 * Implementation Logic: Standard iterative approach using pointer increment and dereference.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int w9p(const char *CYd, const char *DSO) {
    while (*CYd && (*CYd == *DSO)) {
        CYd++;
        DSO++;
    }
    return *(unsigned char *)CYd - *(unsigned char *)DSO;
}

int main(int XYk, char *JX[]) {
    if (XYk < 3) return 0;
    printf("%d\n", w9p(JX[1], JX[2]));
    return 0;
}