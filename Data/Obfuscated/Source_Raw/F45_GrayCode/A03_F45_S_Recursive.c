/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A03_F45_S_Recursive.c
 * Implementation Logic: Recursive approach utilizing the property of bit shifts.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int K9(unsigned int urBl) {
    if (urBl == 0) return 0;
    return urBl ^ (urBl >> 1);
}

int main(int T2, char* k[]) {
    if (T2 < 2) return 0;
    unsigned int urBl = (unsigned int)strtoul(k[1], NULL, 10);
    printf("%u", K9(urBl));
    return 0;
}