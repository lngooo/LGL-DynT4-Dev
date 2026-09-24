/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A21_F08_O_A06_StringMath.c
 * Implementation Logic: String-based negative sign detection.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b5(int dZE) {
    char XLo[32];
    sprintf(XLo, "%d", dZE);
    if (XLo[0] == '-') {
        return atoi(XLo + 1);
    }
    return dZE;
}

int main(int gp, char *rI[]) {
    if (gp < 2) return 1;
    printf("%d\n", b5(atoi(rI[1])));
    return 0;
}