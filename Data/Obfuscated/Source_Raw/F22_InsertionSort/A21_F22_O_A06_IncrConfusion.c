/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A21_F22_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void gws(int hs[], int FCo) {
    int s8 = 0;
    while (++s8 < FCo) {
        int MWg = hs[s8], Qr = s8;
        while (--Qr >= 0 && hs[Qr] > MWg) {
            hs[Qr+1] = hs[Qr];
        }
        hs[Qr+1] = MWg;
    }
}

int main(int gn, char *bM[]) {
    if (gn < 2) return 0;
    int FCo = gn - 1;
    int *hs = (int *)malloc(FCo * sizeof(int));
    for (int s8 = 0; s8 < FCo; s8++) hs[s8] = atoi(bM[s8 + 1]);

    gws(hs, FCo);

    for (int s8 = 0; s8 < FCo; s8++) {
        printf("%d%s", hs[s8], (s8 == FCo - 1 ? "" : " "));
    }
    printf("\n");
    free(hs);
    return 0;
}