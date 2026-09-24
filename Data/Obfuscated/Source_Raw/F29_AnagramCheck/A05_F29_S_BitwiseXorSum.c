/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A05_F29_S_BitwiseXorSum.c
* Implementation Logic: Combines XOR sum and additive sum to reduce collision probability.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int UxZ(char* xK, char* ebCx) {
    if (strlen(xK) != strlen(ebCx)) return 0;
    int pn8u = 0, uO = 0;
    for (int YrJv = 0; xK[YrJv]; YrJv++) {
        pn8u ^= xK[YrJv]; pn8u ^= ebCx[YrJv];
        uO += xK[YrJv]; uO -= ebCx[YrJv];
    }
    return (pn8u == 0 && uO == 0);
}

int main(int Sm5, char* uY[]) {
    if (Sm5 < 3) return 0;
    printf("%d\n", UxZ(uY[1], uY[2]));
    return 0;
}