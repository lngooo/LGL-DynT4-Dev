/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A03_F32_S_Recursive.c
* Implementation Logic: Recursive compression by finding the first run and recursing on the tail.
*/
#include <stdio.h>
#include <string.h>

void aR(char* fvPp) {
    if (!fvPp || !*fvPp) return;
    int bgi7 = 1;
    while (fvPp[bgi7] && fvPp[bgi7] == fvPp[0]) bgi7++;
    printf("%c%d", fvPp[0], bgi7);
    aR(fvPp + bgi7);
}

void kQs(char* fvPp) {
    aR(fvPp);
    printf("\n");
}

int main(int Ak5, char* nUkx[]) {
    if (Ak5 < 2) return 0;
    kQs(nUkx[1]);
    return 0;
}