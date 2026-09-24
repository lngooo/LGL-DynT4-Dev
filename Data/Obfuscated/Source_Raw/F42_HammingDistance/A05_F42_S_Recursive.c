/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A05_F42_S_Recursive.c
 * Implementation Logic: Recursive implementation checking the last bit and calling itself with shifted values.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int gmn(unsigned int o, unsigned int c) {
    if (o == 0 && c == 0) return 0;
    return ((o & 1) != (c & 1)) + gmn(o >> 1, c >> 1);
}

int main(int KI2, char* T2[]) {
    if (KI2 < 3) return 0;
    unsigned int e0 = (unsigned int)strtoul(T2[1], NULL, 10);
    unsigned int l = (unsigned int)strtoul(T2[2], NULL, 10);
    printf("%d", gmn(e0, l));
    return 0;
}