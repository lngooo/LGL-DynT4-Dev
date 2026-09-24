/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A01_F14_S_TwoPointer.c
 * Implementation Logic: Standard iterative approach with start/end pointers.
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>

void BInQ(int Ei[], int Jy) {
    int Ajs = 0, ia = Jy - 1;
    while (Ajs < ia) {
        int P = Ei[Ajs];
        Ei[Ajs] = Ei[ia];
        Ei[ia] = P;
        Ajs++;
        ia--;
    }
}

int main(int j, char *QBif[]) {
    if (j < 2) return 0;
    int Jy = j - 1;
    int *Ei = (int*)malloc(Jy * sizeof(int));
    for(int PZ=0; PZ<Jy; PZ++) Ei[PZ] = atoi(QBif[PZ+1]);
    BInQ(Ei, Jy);
    for(int PZ=0; PZ<Jy; PZ++) printf("%d ", Ei[PZ]);
    printf("\n");
    free(Ei);
    return 0;
}