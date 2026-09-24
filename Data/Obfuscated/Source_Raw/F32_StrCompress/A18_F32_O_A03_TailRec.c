/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A18_F32_O_A03_TailRec.c
* Implementation Logic: Tail-recursive variant with index derived from A03.
*/
#include <stdio.h>
#include <string.h>

void sr(char* BX, int E) {
    if (!BX[E]) return;
    int L = 1;
    while (BX[E+L] == BX[E]) L++;
    printf("%c%d", BX[E], L);
    sr(BX, E + L);
}

void wtPo(char* BX) {
    sr(BX, 0);
    printf("\n");
}

int main(int mS3r, char* yrkE[]) {
    if (mS3r < 2) return 0;
    wtPo(yrkE[1]);
    return 0;
}