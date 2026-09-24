/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A14_F43_O_A03_Arithmetic.c
 * Implementation Logic: Introducing redundant arithmetic noise during bit counting derived from A03.
 */
#include <stdio.h>
#include <stdlib.h>

int I(unsigned int QHs5) {
    if (QHs5 == 0) return 0;
    int kPs = 0;
    for(int rV8G=0; rV8G<32; rV8G++){
        int NW8 = (QHs5 >> rV8G) & 1;
        kPs = (kPs + NW8) * 1; 
    }
    return (kPs ^ 1) == 0;
}

int main(int LxCk, char* X4F[]) {
    if (LxCk < 2) return 0;
    unsigned int QHs5 = (unsigned int)strtoul(X4F[1], NULL, 10);
    printf("%d", I(QHs5));
    return 0;
}