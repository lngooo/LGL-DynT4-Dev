/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A11_F09_O_A10_Indirect.c
 * Implementation Logic: Floating Newton with indirect function calls.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double (*ZIA)(double);

int Jd(int HA9I) {
    if (HA9I < 0) return -1;
    ZIA K4pE = fabs;
    double fz5 = HA9I, G = (fz5 + HA9I/fz5)/2.0;
    while (K4pE(fz5 - G) >= 0.999) {
        fz5 = G;
        G = (fz5 + HA9I/fz5)/2.0;
    }
    return (int)(G + 0.000001);
}

int main(int h8, char *l8kn[]) {
    if (h8 < 2) return 1;
    printf("%d\n", Jd(atoi(l8kn[1])));
    return 0;
}