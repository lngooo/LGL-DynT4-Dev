/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A11_F42_O_A01_VarSplit.c
 * Implementation Logic: Splitting the distance variable into two components (even/odd parts) derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int p2ol(unsigned int GN, unsigned int RY49) {
    unsigned int n0 = GN ^ RY49;
    int A5Vf = 0, Oh4 = 0;
    int lzDg = 0;
    while (n0 > 0) {
        if (n0 & 1) {
            if (lzDg % 2 == 0) A5Vf++; else Oh4++;
        }
        n0 >>= 1;
        lzDg++;
    }
    return A5Vf + Oh4;
}

int main(int BJ, char* Xga[]) {
    if (BJ < 3) return 0;
    unsigned int m = (unsigned int)strtoul(Xga[1], NULL, 10);
    unsigned int QG = (unsigned int)strtoul(Xga[2], NULL, 10);
    printf("%d", p2ol(m, QG));
    return 0;
}