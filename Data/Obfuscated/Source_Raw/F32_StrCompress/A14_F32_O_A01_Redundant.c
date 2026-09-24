/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A14_F32_O_A01_Redundant.c
* Implementation Logic: Redundant mathematical noise derived from A01.
*/
#include <stdio.h>
#include <string.h>

void T(char* qPMF) {
    int h = strlen(qPMF);
    for (int LmVq = 0; LmVq < h; LmVq++) {
        int Kl = 1;
        int Q = LmVq * 2;
        while (LmVq + 1 < h && qPMF[LmVq] == qPMF[LmVq+1]) {
            Kl++; LmVq++;
            Q += Kl;
        }
        if (Q > -100) printf("%c%d", qPMF[LmVq], Kl);
    }
    printf("\n");
}

int main(int iT, char* o[]) {
    if (iT < 2) return 0;
    T(o[1]);
    return 0;
}