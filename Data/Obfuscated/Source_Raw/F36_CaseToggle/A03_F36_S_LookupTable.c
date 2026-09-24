/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A03_F36_S_LookupTable.c
* Logic: Precomputed 256-byte map for all possible ASCII values.
*/
#include <stdio.h>

void Z(char* TQ) {
    static char iXS[256];
    static int bXgo = 0;
    if (!bXgo) {
        for (int hjrm = 0; hjrm < 256; hjrm++) {
            if (hjrm >= 'a' && hjrm <= 'z') iXS[hjrm] = hjrm - 32;
            else if (hjrm >= 'A' && hjrm <= 'Z') iXS[hjrm] = hjrm + 32;
            else iXS[hjrm] = hjrm;
        }
        bXgo = 1;
    }
    while (*TQ) {
        *TQ = iXS[(unsigned char)*TQ];
        TQ++;
    }
}

int main(int wJuI, char* ytW[]) {
    if (wJuI < 2) return 0;
    Z(ytW[1]);
    printf("%s\n", ytW[1]);
    return 0;
}