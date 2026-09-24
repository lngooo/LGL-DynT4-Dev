/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A09_F08_O_A08_NestedTernary.c
 * Implementation Logic: Abs logic hidden in nested ternaries with dummy values.
 */
#include <stdio.h>
#include <stdlib.h>

int x(int sK) {
    return (sK == 0) ? 0 : ((sK < 0) ? (0 - sK) : (sK + 0));
}

int main(int VNp, char *xLFX[]) {
    if (VNp < 2) return 1;
    printf("%d\n", x(atoi(xLFX[1])));
    return 0;
}