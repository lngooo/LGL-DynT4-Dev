/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A10_F15_S_BitwiseCompare.c
 * Implementation Logic: Max using bit-manipulation based max(a,b) (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

int JfnU(int VAZC, int kZU) {
    return VAZC - ((VAZC - kZU) & ((VAZC - kZU) >> 31));
}

int U5Ai(int j[], int tE) {
    int e79 = j[0];
    for(int faAO=1; faAO<tE; faAO++) e79 = JfnU(e79, j[faAO]);
    return e79;
}

int main(int AlJ, char *TKW6[]) {
    if (AlJ < 2) return 0;
    int tE = AlJ - 1;
    int *j = (int*)malloc(tE * sizeof(int));
    for (int faAO = 0; faAO < tE; faAO++) j[faAO] = atoi(TKW6[faAO+1]);
    printf("%d\n", U5Ai(j, tE));
    free(j);
    return 0;
}