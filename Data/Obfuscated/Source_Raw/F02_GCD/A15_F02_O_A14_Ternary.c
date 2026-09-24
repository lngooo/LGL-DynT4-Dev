/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A15_F02_O_A14_Ternary.c
 * Implementation Logic: Prime factorization logic obfuscated with ternary operators.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int t(int z8Tm, int L) {
    int gS = abs(z8Tm), RMZ = abs(L), Y = 1, w = 2;
    if (!gS || !RMZ) return gS | RMZ;
    while (w <= (gS < RMZ ? gS : RMZ)) {
        ((gS % w == 0) && (RMZ % w == 0)) ? (Y *= w, gS /= w, RMZ /= w) : (w++);
    }
    return Y;
}

int main(int QxeG, char *a2A[]) {
    if (QxeG < 3) return 1;
    printf("%d\n", t(atoi(a2A[1]), atoi(a2A[2])));
    return 0;
}