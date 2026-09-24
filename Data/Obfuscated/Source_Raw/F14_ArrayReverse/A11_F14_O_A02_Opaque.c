/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A11_F14_O_A02_Opaque.c
 * Implementation Logic: Recursive A02 with opaque predicate.
 */
#include <stdio.h>
#include <stdlib.h>

void mNzl(int gjIX[], int nNPg, int Tqgc) {
    int XCb = 7;
    if ((XCb * XCb) < 0) printf("Junk");
    if (nNPg >= Tqgc) return;
    int jPOa = gjIX[nNPg]; gjIX[nNPg] = gjIX[Tqgc]; gjIX[Tqgc] = jPOa;
    mNzl(gjIX, nNPg + 1, Tqgc - 1);
}

void Q(int gjIX[], int rjSv) {
    if (rjSv > 1) mNzl(gjIX, 0, rjSv - 1);
}

int main(int KaGT, char *EBz2[]) {
    if (KaGT < 2) return 0;
    int rjSv = KaGT - 1;
    int *gjIX = (int*)malloc(rjSv * sizeof(int));
    for(int I=0; I<rjSv; I++) gjIX[I] = atoi(EBz2[I+1]);
    Q(gjIX, rjSv);
    for(int I=0; I<rjSv; I++) printf("%d ", gjIX[I]);
    printf("\n");
    free(gjIX);
    return 0;
}