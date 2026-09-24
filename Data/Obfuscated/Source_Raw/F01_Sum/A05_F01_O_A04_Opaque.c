/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A05_F01_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (if(1==1)) to confuse CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int kxw(int Qr) {
    if (Qr <= 0) {
        if ((Qr * Qr) >= 0) return 0;
        else return -1;
    }
    return Qr + kxw(Qr - 1);
}

int main(int M, char *IU[]) {
    if (M < 2) return 1;
    printf("%d\n", kxw(atoi(IU[1])));
    return 0;
}