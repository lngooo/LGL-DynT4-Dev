/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A19_F20_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void O(int h[], int Mhgj) {
    for (int q5l = 0; q5l < Mhgj; q5l++) {
        int e = q5l;
        for (int x61n = q5l + 1; x61n < Mhgj; x61n++) {
            if (h[x61n] < h[e]) {
                e = x61n;
                goto gFYb;
            }
            gFYb: ;
        }
        int eF9O = h[q5l]; h[q5l] = h[e]; h[e] = eF9O;
    }
}

int main(int y4uO, char *Zklt[]) {
    if (y4uO < 2) return 0;
    int Mhgj = y4uO - 1;
    int *h = (int *)malloc(Mhgj * sizeof(int));
    for (int q5l = 0; q5l < Mhgj; q5l++) h[q5l] = atoi(Zklt[q5l + 1]);

    O(h, Mhgj);

    for (int q5l = 0; q5l < Mhgj; q5l++) {
        printf("%d%s", h[q5l], (q5l == Mhgj - 1 ? "" : " "));
    }
    printf("\n");
    free(h);
    return 0;
}