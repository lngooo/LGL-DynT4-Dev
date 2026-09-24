/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A11_F07_O_A05_Goto.c
 * Implementation Logic: Recursive logic A05 replaced by goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int nZ(int TNO, int exp) {
    int kNiY = 1;
K:
    if (exp <= 0) goto IrM;
    kNiY *= TNO;
    exp--;
    goto K;
IrM:
    return kNiY;
}

int main(int uT, char *sKr[]) {
    if (uT < 3) return 1;
    printf("%d\n", nZ(atoi(sKr[1]), atoi(sKr[2])));
    return 0;
}