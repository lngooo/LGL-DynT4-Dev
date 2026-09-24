/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A13_F16_O_A02_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fzql(int X3[], int fb2n, int yX) {
    if (fb2n < yX) {
        int sPW9 = (fb2n + yX) / 2;
        fzql(X3, fb2n, sPW9);
        fzql(X3, sPW9 + 1, yX);
        for (int ht = sPW9 + 1; ht <= yX; ht++) {
            int ZBVZ = X3[ht], RMi = ht - 1;
            while (RMi >= fb2n && X3[RMi] > ZBVZ) { X3[RMi + 1] = X3[RMi]; RMi--; }
            X3[RMi + 1] = ZBVZ;
        }
    }
}

int main(int Qg1, char *GmF[]) {
    if (Qg1 < 2) return 0;
    int yErK = Qg1 - 1;
    int *X3 = (int *)malloc(yErK * sizeof(int));
    for (int fWBZ = 0; fWBZ < yErK; fWBZ++) X3[fWBZ] = atoi(GmF[fWBZ + 1]);

    fzql(X3, 0, yErK - 1);

    for (int fWBZ = 0; fWBZ < yErK; fWBZ++) {
        printf("%d%s", X3[fWBZ], (fWBZ == yErK - 1 ? "" : " "));
    }
    printf("\n");
    free(X3);
    return 0;
}