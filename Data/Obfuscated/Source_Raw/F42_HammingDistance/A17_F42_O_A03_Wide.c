/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A17_F42_O_A03_Wide.c
 * Implementation Logic: Promoting variables to long long to change token width and instruction set derived from A03.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int czzs(unsigned int rI, unsigned int wHg) {
    unsigned long long aJ = (unsigned long long)rI ^ wHg;
    int QZ = 0;
    while (aJ != 0ULL) {
        aJ &= (aJ - 1ULL);
        QZ++;
    }
    return QZ;
}

int main(int v, char* tQ0I[]) {
    if (v < 3) return 0;
    unsigned int NM = (unsigned int)strtoul(tQ0I[1], NULL, 10);
    unsigned int q12V = (unsigned int)strtoul(tQ0I[2], NULL, 10);
    printf("%d", czzs(NM, q12V));
    return 0;
}