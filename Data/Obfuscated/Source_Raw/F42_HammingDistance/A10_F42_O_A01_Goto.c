/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A10_F42_O_A01_Goto.c
 * Implementation Logic: Loop reconstruction using goto labels to disrupt structured control flow derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int Ta(unsigned int mVk, unsigned int mIz) {
    unsigned int ga = mVk ^ mIz;
    int Ocu = 0;
rp:
    if (ga == 0) goto JT;
    if (ga & 1) goto w;
A1:
    ga >>= 1;
    goto rp;
w:
    Ocu++;
    goto A1;
JT:
    return Ocu;
}

int main(int QX, char* d[]) {
    if (QX < 3) return 0;
    unsigned int zISB = (unsigned int)strtoul(d[1], NULL, 10);
    unsigned int DW = (unsigned int)strtoul(d[2], NULL, 10);
    printf("%d", Ta(zISB, DW));
    return 0;
}