/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A01_F10_S_ShiftCount.c
 * Implementation Logic: ShiftCount
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Pfo(int oV3) {
    int AY4 = 0;
    while (oV3 >>= 1) AY4++;
    return AY4;
}

int main(int xqL, char *D2h[]) {
    if (xqL < 2) return 0;
    int oV3 = atoi(D2h[1]);
    if (oV3 <= 0) return 0; 
    int d3OL = Pfo(oV3);
    printf("%d\n", d3OL);
    return 0;
}