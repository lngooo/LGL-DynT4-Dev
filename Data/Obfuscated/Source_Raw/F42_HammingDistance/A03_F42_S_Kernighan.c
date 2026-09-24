/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A03_F42_S_Kernighan.c
 * Implementation Logic: Uses Brian Kernighan's algorithm (n & (n-1)) on the XOR result for efficiency.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int bA(unsigned int z, unsigned int Ifj) {
    unsigned int bP = z ^ Ifj;
    int KU7 = 0;
    while (bP) {
        bP &= (bP - 1);
        KU7++;
    }
    return KU7;
}

int main(int jL, char* heu[]) {
    if (jL < 3) return 0;
    unsigned int ncjL = (unsigned int)strtoul(heu[1], NULL, 10);
    unsigned int uWQ = (unsigned int)strtoul(heu[2], NULL, 10);
    printf("%d", bA(ncjL, uWQ));
    return 0;
}