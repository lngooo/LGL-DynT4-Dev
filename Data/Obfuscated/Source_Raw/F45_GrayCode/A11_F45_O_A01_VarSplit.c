/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A11_F45_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into high/low parts derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int fkN(unsigned int X) {
    unsigned int JS = X & 0xFFFF0000;
    unsigned int gJh = X & 0x0000FFFF;
    unsigned int eOlY = (JS | gJh) >> 1;
    return (JS | gJh) ^ eOlY;
}

int main(int wKb, char* Q35[]) {
    if (wKb < 2) return 0;
    unsigned int X = (unsigned int)strtoul(Q35[1], NULL, 10);
    printf("%u", fkN(X));
    return 0;
}