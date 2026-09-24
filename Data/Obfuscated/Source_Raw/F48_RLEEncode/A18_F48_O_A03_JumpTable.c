/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A18_F48_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void R(const char *Ly, char *XkX8) {
    char *p = (char*)Ly;
    int IJz = 0;
OSV:
    if (!*p) return;
    char Q = *p;
    int IIaj = 1;
    while (*(p + IIaj) == Q) IIaj++;
    XkX8[IJz++] = Q;
    IJz += sprintf(XkX8 + IJz, "%d", IIaj);
    p += IIaj;
    goto OSV;
}

int main(int ukMS, char *f5y[]) {
    if (ukMS < 2) return 0;
    char *SBT = f5y[1];
    char nU[256] = {0};
    R(SBT, nU);
    printf("%s\n", nU);
    return 0;
}