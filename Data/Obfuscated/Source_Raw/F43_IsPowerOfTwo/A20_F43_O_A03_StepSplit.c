/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A20_F43_O_A03_StepSplit.c
 * Implementation Logic: Loop unrolling and variable accumulation split derived from A03.
 */
#include <stdio.h>
#include <stdlib.h>

int Kdxu(unsigned int J3) {
    if (J3 == 0) return 0;
    int BLno = 0, fO1 = 0;
    while (J3 > 0) {
        BLno += (J3 & 1);
        J3 >>= 1;
        if (J3 > 0) {
            fO1 += (J3 & 1);
            J3 >>= 1;
        }
    }
    return (BLno + fO1) == 1;
}

int main(int VGI, char* W[]) {
    if (VGI < 2) return 0;
    unsigned int J3 = (unsigned int)strtoul(W[1], NULL, 10);
    printf("%d", Kdxu(J3));
    return 0;
}