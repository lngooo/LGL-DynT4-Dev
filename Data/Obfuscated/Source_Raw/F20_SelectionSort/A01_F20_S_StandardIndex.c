/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A01_F20_S_StandardIndex.c
 * Implementation Logic: StandardIndex
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void i6hd(int x22[], int sD) {
    for (int J7 = 0; J7 < sD - 1; J7++) {
        int pn0o = J7;
        for (int V = J7 + 1; V < sD; V++) {
            if (x22[V] < x22[pn0o]) pn0o = V;
        }
        int h9 = x22[pn0o];
        x22[pn0o] = x22[J7];
        x22[J7] = h9;
    }
}

int main(int yU, char *S[]) {
    if (yU < 2) return 0;
    int sD = yU - 1;
    int *x22 = (int *)malloc(sD * sizeof(int));
    for (int J7 = 0; J7 < sD; J7++) x22[J7] = atoi(S[J7 + 1]);

    i6hd(x22, sD);

    for (int J7 = 0; J7 < sD; J7++) {
        printf("%d%s", x22[J7], (J7 == sD - 1 ? "" : " "));
    }
    printf("\n");
    free(x22);
    return 0;
}