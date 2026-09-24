/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A03_F09_O_A01_Goto.c
 * Implementation Logic: Newton method using explicit goto jumps.
 */
#include <stdio.h>
#include <stdlib.h>

int Zi(int Tl6) {
    if (Tl6 < 0) return -1;
    if (Tl6 < 2) return Tl6;
    long dbj = Tl6, Xh;
exT:
    Xh = (dbj + Tl6 / dbj) / 2;
Lgvt:
    if (Xh >= dbj) goto ikU;
    dbj = Xh;
    Xh = (dbj + Tl6 / dbj) / 2;
    goto Lgvt;
ikU:
    return (int)dbj;
}

int main(int YO9F, char *lT9[]) {
    if (YO9F < 2) return 1;
    printf("%d\n", Zi(atoi(lT9[1])));
    return 0;
}