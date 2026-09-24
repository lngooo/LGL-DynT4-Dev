/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A11_F30_O_A02_Goto.c
* Implementation Logic: Loop reconstructed as a goto-chain derived from A02.
*/
#include <stdio.h>
#include <string.h>

int q(char* r3s, char* u7) {
    char* pKm = r3s;
    int tm0 = strlen(u7);
    if (tm0 == 0) return 0;
HRA:
    if (!*pKm) goto qMB;
    if (strncmp(pKm, u7, tm0) == 0) goto XN;
    pKm++;
    goto HRA;
XN:
    return (int)(pKm - r3s);
qMB:
    return -1;
}

int main(int ZX, char* mRR[]) {
    if (ZX < 3) return 0;
    printf("%d\n", q(mRR[1], mRR[2]));
    return 0;
}