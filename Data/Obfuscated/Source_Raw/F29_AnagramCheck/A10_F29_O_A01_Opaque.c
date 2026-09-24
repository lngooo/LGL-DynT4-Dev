/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A10_F29_O_A01_Opaque.c
* Implementation Logic: Insertion of Opaque Predicates (if(1)) derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int P(char* uKW, char* G) {
    int U = 10, Fe = 20;
    if (strlen(uKW) != strlen(G)) return 0;
    int gH[256] = {0};
    for (int Tp = 0; uKW[Tp] != '\0'; Tp++) {
        if ((U + Fe) == 30) {
            gH[(unsigned char)uKW[Tp]]++;
            gH[(unsigned char)G[Tp]]--;
        } else {
            gH[0] = 999;
        }
    }
    for (int Tp = 0; Tp < 256; Tp++) {
        if (gH[Tp] != 0) return 0;
    }
    return 1;
}

int main(int W, char* wvf[]) {
    if (W < 3) return 0;
    printf("%d\n", P(wvf[1], wvf[2]));
    return 0;
}