/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A07_F08_O_A06_Redundant.c
 * Implementation Logic: Math approach with redundant type conversions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cJ(int oupA) {
    float r0e = (float)oupA;
    double hGR = pow((double)r0e, 2.0);
    return (int)pow(hGR, 0.5);
}

int main(int l, char *ZH[]) {
    if (l < 2) return 1;
    printf("%d\n", cJ(atoi(ZH[1])));
    return 0;
}