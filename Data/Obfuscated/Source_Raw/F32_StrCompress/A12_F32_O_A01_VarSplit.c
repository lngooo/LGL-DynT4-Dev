/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A12_F32_O_A01_VarSplit.c
* Implementation Logic: Variable i split into i_lo and i_hi derived from A01.
*/
#include <stdio.h>
#include <string.h>

void g(char* cEZx) {
    int Igqk = strlen(cEZx);
    int fv = 0, lP = 0;
    while ((fv + lP) < Igqk) {
        int O = 1, E = fv + lP;
        while (E + 1 < Igqk && cEZx[E] == cEZx[E + 1]) { O++; E++; }
        printf("%c%d", cEZx[E], O);
        int UT = (E + 1) - (fv + lP);
        fv += UT;
    }
    printf("\n");
}

int main(int kV, char* Aa[]) {
    if (kV < 2) return 0;
    g(Aa[1]);
    return 0;
}