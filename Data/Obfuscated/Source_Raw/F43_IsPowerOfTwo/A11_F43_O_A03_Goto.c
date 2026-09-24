/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A11_F43_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG.
 */
#include <stdio.h>
#include <stdlib.h>

int uU(unsigned int EZ) {
    if (EZ == 0) return 0;
    int g = 0;
w:
    if (EZ <= 0) goto REms;
    if (EZ & 1) g++;
    EZ >>= 1;
    goto w;
REms:
    return (g == 1);
}

int main(int yFf, char* CVy7[]) {
    if (yFf < 2) return 0;
    unsigned int EZ = (unsigned int)strtoul(CVy7[1], NULL, 10);
    printf("%d", uU(EZ));
    return 0;
}