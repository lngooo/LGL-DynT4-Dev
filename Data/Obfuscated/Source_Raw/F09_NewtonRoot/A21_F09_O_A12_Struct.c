/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A21_F09_O_A12_Struct.c
 * Implementation Logic: Newton method with data encapsulated in structs.
 */
#include <stdio.h>
#include <stdlib.h>

struct sq6A { long yVcL; long vU; };

int RI(int QwGt) {
    if (QwGt < 0) return -1;
    struct sq6A Q4 = { (long)QwGt, (long)QwGt };
    if (QwGt >= 2) {
        long sg = (Q4.yVcL + Q4.vU / Q4.yVcL) >> 1;
        while (sg < Q4.yVcL) {
            Q4.yVcL = sg;
            sg = (Q4.yVcL + Q4.vU / Q4.yVcL) >> 1;
        }
    }
    return (int)Q4.yVcL;
}

int main(int iVqU, char *R5[]) {
    if (iVqU < 2) return 1;
    printf("%d\n", RI(atoi(R5[1])));
    return 0;
}