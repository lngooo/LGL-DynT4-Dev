/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A16_F07_O_A07_Inline.c
 * Implementation Logic: Pseudo-inlined recursive state.
 */
#include <stdio.h>
#include <stdlib.h>

int Pt(int rf, int exp) {
    int qfx = 1;
    dz:
    if (exp <= 0) return qfx;
    qfx *= rf;
    exp--;
    goto dz;
}

int main(int USW, char *BP[]) {
    if (USW < 3) return 1;
    printf("%d\n", Pt(atoi(BP[1]), atoi(BP[2])));
    return 0;
}