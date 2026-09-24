/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A09_F02_O_A08_NestedWhile.c
 * Implementation Logic: Subtraction-based GCD with nested while loops to alter CFG.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int X(int olZ9, int dJp6) {
    olZ9 = abs(olZ9); dJp6 = abs(dJp6);
    while (olZ9 != dJp6) {
        while (olZ9 > dJp6) olZ9 -= dJp6;
        while (dJp6 > olZ9) dJp6 -= olZ9;
        if (olZ9 == 0 || dJp6 == 0) break;
    }
    return (olZ9 == 0) ? dJp6 : olZ9;
}

int main(int D, char *ZD[]) {
    if (D < 3) return 1;
    printf("%d\n", X(atoi(ZD[1]), atoi(ZD[2])));
    return 0;
}