/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A20_F08_O_A10_Struct.c
 * Implementation Logic: Wrapping input and sign in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct yiA { int P4; int OZ; };

int y(int EIY) {
    struct yiA w6KG;
    w6KG.P4 = EIY;
    w6KG.OZ = (EIY < 0);
    if (w6KG.OZ) return -w6KG.P4;
    return w6KG.P4;
}

int main(int yrl, char *u[]) {
    if (yrl < 2) return 1;
    printf("%d\n", y(atoi(u[1])));
    return 0;
}