/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A20_F12_O_A08_Struct.c
 * Implementation Logic: Cocktail shaker BS with range encapsulated in struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct U { int YEl; int SSK0; int M; };

void cUZ(int fXd6[], int w40) {
    struct U A73h = {0, w40 - 1, 1};
    while (A73h.M) {
        A73h.M = 0;
        for (int VP = A73h.YEl; VP < A73h.SSK0; VP++) {
            if (fXd6[VP] > fXd6[VP+1]) {
                int O = fXd6[VP]; fXd6[VP] = fXd6[VP+1]; fXd6[VP+1] = O;
                A73h.M = 1;
            }
        }
        if (!A73h.M) break;
        A73h.M = 0; A73h.SSK0--;
        for (int VP = A73h.SSK0 - 1; VP >= A73h.YEl; VP--) {
            if (fXd6[VP] > fXd6[VP+1]) {
                int O = fXd6[VP]; fXd6[VP] = fXd6[VP+1]; fXd6[VP+1] = O;
                A73h.M = 1;
            }
        }
        A73h.YEl++;
    }
}

int main(int dtHc, char *IKj[]) {
    if (dtHc < 2) return 0;
    int w40 = dtHc - 1;
    int *fXd6 = (int*)malloc(w40 * sizeof(int));
    for (int VP = 0; VP < w40; VP++) fXd6[VP] = atoi(IKj[VP+1]);
    cUZ(fXd6, w40);
    for (int VP = 0; VP < w40; VP++) printf("%d ", fXd6[VP]);
    printf("\n");
    free(fXd6);
    return 0;
}