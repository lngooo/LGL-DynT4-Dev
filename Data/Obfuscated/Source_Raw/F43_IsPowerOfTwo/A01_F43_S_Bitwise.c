/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A01_F43_S_Bitwise.c
 * Implementation Logic: Using the classic n & (n-1) bitwise trick. 
 * A power of two has only one bit set.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int ukg2(unsigned int Io) {
    if (Io == 0) return 0;
    return (Io & (Io - 1)) == 0;
}

int main(int aF1, char* i[]) {
    if (aF1 < 2) return 0;
    unsigned int Io = (unsigned int)strtoul(i[1], NULL, 10);
    printf("%d", ukg2(Io));
    return 0;
}