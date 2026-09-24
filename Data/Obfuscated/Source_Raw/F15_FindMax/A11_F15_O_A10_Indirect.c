/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A11_F15_O_A10_Indirect.c
 * Implementation Logic: Bitwise max with function pointer indirection.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*ml)(int, int);
int sJFc(int LtF, int obYa) { return LtF ^ ((LtF ^ obYa) & -(LtF < obYa)); }

int qt(int hPQ5[], int AlF) {
    ml bh = sJFc;
    int FeM = hPQ5[0];
    for(int LEK=1; LEK<AlF; LEK++) FeM = bh(FeM, hPQ5[LEK]);
    return FeM;
}

int main(int qORE, char *x[]) {
    if (qORE < 2) return 0;
    int AlF = qORE - 1;
    int *hPQ5 = (int*)malloc(AlF * sizeof(int));
    for (int LEK = 0; LEK < AlF; LEK++) hPQ5[LEK] = atoi(x[LEK+1]);
    printf("%d\n", qt(hPQ5, AlF));
    free(hPQ5);
    return 0;
}