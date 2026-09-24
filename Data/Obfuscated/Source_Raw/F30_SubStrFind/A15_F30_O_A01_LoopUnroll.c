/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A15_F30_O_A01_LoopUnroll.c
* Implementation Logic: Partial loop unrolling of the inner comparison derived from A01.
*/
#include <stdio.h>
#include <string.h>

int opDN(char* l6, char* rg) {
    int p = strlen(l6), BL3 = strlen(rg);
    if (BL3 == 0) return 0;
    for (int Cnog = 0; Cnog <= p - BL3; Cnog++) {
        int A = 1;
        int CjV4 = 0;
        while (CjV4 < BL3 - 1) {
            if (l6[Cnog+CjV4] != rg[CjV4] || l6[Cnog+CjV4+1] != rg[CjV4+1]) { A = 0; break; }
            CjV4 += 2;
        }
        if (A && CjV4 == BL3 - 1) if (l6[Cnog+CjV4] != rg[CjV4]) A = 0;
        if (A) return Cnog;
    }
    return -1;
}

int main(int NWyb, char* n4R[]) {
    if (NWyb < 3) return 0;
    printf("%d\n", opDN(n4R[1], n4R[2]));
    return 0;
}