/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A11_F08_O_A10_Pointer.c
 * Implementation Logic: Multiplexing via pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int Hp(int F9dj) {
    int fc6[2];
    fc6[0] = F9dj;
    fc6[1] = -F9dj;
    return *(fc6 + (F9dj < 0));
}

int main(int HA, char *DVf[]) {
    if (HA < 2) return 1;
    printf("%d\n", Hp(atoi(DVf[1])));
    return 0;
}