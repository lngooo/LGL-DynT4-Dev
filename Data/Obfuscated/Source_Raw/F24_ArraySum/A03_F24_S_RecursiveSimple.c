/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A03_F24_S_RecursiveSimple.c
 * Implementation Logic: RecursiveSimple
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int iQ(int Y9d[], int t) {
    if (t <= 0) return 0;
    return Y9d[t-1] + iQ(Y9d, t-1);
}

int main(int Zw, char *zkDa[]) {
    if (Zw < 2) return 0;
    int t = Zw - 1;
    int *Y9d = (int *)malloc(t * sizeof(int));
    for (int m4 = 0; m4 < t; m4++) Y9d[m4] = atoi(zkDa[m4 + 1]);

    int tt = iQ(Y9d, t);
    printf("%d\n", tt);

    free(Y9d);
    return 0;
}