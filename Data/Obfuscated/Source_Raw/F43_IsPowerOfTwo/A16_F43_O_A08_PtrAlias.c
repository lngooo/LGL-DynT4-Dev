/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A16_F43_O_A08_PtrAlias.c
 * Implementation Logic: Data flow indirection using pointers to access the LUT derived from A08.
 */
#include <stdio.h>
#include <stdlib.h>

int eC(unsigned int UIMQ) {
    static unsigned int HIm[32];
    for(int fDa7=0; fDa7<32; fDa7++) HIm[fDa7] = 1U << fDa7;
    unsigned int *WLH = HIm;
    if (UIMQ == 0) return 0;
    for (int fDa7 = 0; fDa7 < 32; fDa7++) {
        if (*(WLH + fDa7) == UIMQ) return 1;
    }
    return 0;
}

int main(int q7v, char* Y[]) {
    if (q7v < 2) return 0;
    unsigned int UIMQ = (unsigned int)strtoul(Y[1], NULL, 10);
    printf("%d", eC(UIMQ));
    return 0;
}