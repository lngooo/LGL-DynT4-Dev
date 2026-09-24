/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A21_F27_O_A01_XorLogic.c
 * Implementation Logic: Loop condition based on bitwise XOR derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int Gx(const char *n, const char *D) {
    for(; !(*n ^ *D); n++, D++) {
        if(!*n) return 0;
    }
    return *(unsigned char*)n - *(unsigned char*)D;
}

int main(int oT, char *eTn[]) {
    if (oT < 3) return 0;
    printf("%d\n", Gx(eTn[1], eTn[2]));
    return 0;
}