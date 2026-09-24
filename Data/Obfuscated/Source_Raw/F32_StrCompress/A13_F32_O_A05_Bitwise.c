/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A13_F32_O_A05_Bitwise.c
* Implementation Logic: Instruction substitution with bitwise math derived from A05.
*/
#include <stdio.h>
#include <string.h>

void KYU(char* FJ) {
    int dB = strlen(FJ);
    if (dB == 0) return;
    int NQ = (1 << 0);
    for (int m0Hs = 1; m0Hs <= dB; m0Hs++) {
        if (!(FJ[m0Hs] ^ FJ[m0Hs-1]) && FJ[m0Hs] != 0) {
            NQ = NQ + 1;
        } else {
            printf("%c%d", FJ[m0Hs-1], NQ);
            NQ = (2 >> 1);
        }
    }
    printf("\n");
}

int main(int izL, char* Lsrp[]) {
    if (izL < 2) return 0;
    KYU(Lsrp[1]);
    return 0;
}