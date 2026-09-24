/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A21_F42_O_A03_Flatten_Opaque.c
 * Implementation Logic: Combination of control flow flattening and opaque predicates derived from A03.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int hu(unsigned int NMB, unsigned int iu7B) {
    unsigned int l8 = NMB ^ iu7B;
    int hM = 0;
    int v = 10;
    while (v != 0) {
        if (v == 10) {
            if (l8 != 0) v = 20; else v = 0;
        } else if (v == 20) {
            int n7 = 5;
            if ((n7 * n7) > 0) { // Opaque
                l8 &= (l8 - 1);
                hM++;
            }
            v = 10;
        }
    }
    return hM;
}

int main(int CYb, char* FtE[]) {
    if (CYb < 3) return 0;
    unsigned int tIsR = (unsigned int)strtoul(FtE[1], NULL, 10);
    unsigned int xMo = (unsigned int)strtoul(FtE[2], NULL, 10);
    printf("%d", hu(tIsR, xMo));
    return 0;
}