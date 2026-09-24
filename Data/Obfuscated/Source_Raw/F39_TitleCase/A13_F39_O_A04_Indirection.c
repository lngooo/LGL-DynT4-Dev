/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A13_F39_O_A04_Indirection.c
 * Implementation Logic: A04 bitwise logic wrapped in nested pointer indirection.
 * Input Format: <string>
 */
#include <stdio.h>

void R(char* P) {
    char** Mf = &P;
    int R40R = 1;
    for (int E = 0; (*Mf)[E]; E++) {
        char* y3M = &((*Mf)[E]);
        if (*y3M == 32) { R40R = 1; continue; }
        if (R40R) { if (*y3M >= 97) *y3M &= 0xDF; R40R = 0; }
        else { if (*y3M <= 90 && *y3M >= 65) *y3M |= 0x20; }
    }
}

int main(int k, char* h8[]) {
    if (k < 2) return 0;
    R(h8[1]);
    printf("%s", h8[1]);
    return 0;
}