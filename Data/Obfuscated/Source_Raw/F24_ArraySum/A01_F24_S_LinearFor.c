/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A01_F24_S_LinearFor.c
 * Implementation Logic: LinearFor
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SgO(int akA[], int vvP5) {
    int l = 0;
    for (int tkD = 0; tkD < vvP5; tkD++) l += akA[tkD];
    return l;
}

int main(int Wb, char *ZNDL[]) {
    if (Wb < 2) return 0;
    int vvP5 = Wb - 1;
    int *akA = (int *)malloc(vvP5 * sizeof(int));
    for (int tkD = 0; tkD < vvP5; tkD++) akA[tkD] = atoi(ZNDL[tkD + 1]);

    int UzE1 = SgO(akA, vvP5);
    printf("%d\n", UzE1);

    free(akA);
    return 0;
}