/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A15_F27_O_A01_Struct.c
 * Implementation Logic: Pointers wrapped in a struct to obfuscate data flow from A01.
 */
#include <stdio.h>
#include <stdlib.h>

struct lInw { const char *R; const char *Mx; };

int CT(const char *Gj, const char *bNc7) {
    struct lInw Z = {Gj, bNc7};
    while (*Z.R && (*Z.R == *Z.Mx)) {
        Z.R++; Z.Mx++;
    }
    return *(unsigned char *)Z.R - *(unsigned char *)Z.Mx;
}

int main(int sgw, char *LH[]) {
    if (sgw < 3) return 0;
    printf("%d\n", CT(LH[1], LH[2]));
    return 0;
}